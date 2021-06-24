#include <DataReceiver.h>

//ctor
DataReceiver:: DataReceiver(int socket, Drone* drn, Logger* logger)
    {
    this->socketFileDescriptor = socket;//socket stream file descriptor...
    this->droneInstance = drn;
    this->isActive = true;
    this->pLogger = logger;
    }

//dtor
DataReceiver::~DataReceiver()
{
   pthread_cancel(dataReceiverThread);
   pLogger->info("DataReciever thread stopped....");
  
}

//static thread task function wrapper...passed to pthread
void* DataReceiver::staticDataReceiverTask(void *dr)
{
  ((DataReceiver*)dr)->dataReceiverTask();
}

//Class member function holding thread body
void DataReceiver::dataReceiverTask()
{
    while(this->isActive)
    {
        try
        {
            //read from socket input stream data from server..
            unsigned char* messageFromServer = AppUtils::readNetworkMessage(this->socketFileDescriptor);
            Command command = Command();//ptotobuf command object according to prototype specified in .proto file
            command.ParseFromString(string((char*)messageFromServer));//parse string to protobuf command object

            CommandData commandData = CommandData();//command data dto
            commandData.commandCode = command.code();

            if(command.code() == 14)//if code is 14, then payload of Command object will be list of datapoints(mission data) from server
            {
                MissionData missionData = MissionData();
                missionData.ParseFromString(command.payload());
                commandData.data = missionData;
            }
            this->droneInstance->executeCommand(commandData);
            
        }
        catch(const std::exception& e)
        {
            pLogger->info("DataReceiver error. See below for more info :");
            pLogger->error(e.what());
        }
    }
}

//create and start thread
void DataReceiver::start()
{
      int rc;
      pLogger->info("Starting Data Receiver thread...");
      rc = pthread_create(&dataReceiverThread, NULL, staticDataReceiverTask, this);
      if (rc) 
      {
        pLogger->info("Failed to start Data Receiver thread.");
        exit(-1);
      }

}

void DataReceiver::stop()
{
    this->isActive = false;
}