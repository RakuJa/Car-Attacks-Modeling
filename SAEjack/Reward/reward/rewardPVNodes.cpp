#include "rewardPVNodes.h"

rewardPV0Worker::rewardPV0Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&Formula);
}

rewardPV0Worker::~rewardPV0Worker() {
  delete [] TheModelPtr;
}

double rewardPV0Worker::Reward_Function(void) {

return Formula->Networkaccess->Mark();

return (0);



}

rewardPV0::rewardPV0(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheFormulaADVISE);
  double startpts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  double stoppts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  Initialize("NetworkAccess",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("Networkaccess","Formula");
}

rewardPV0::~rewardPV0() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void rewardPV0::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new rewardPV0Worker;
}
rewardPV1Worker::rewardPV1Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&Formula);
}

rewardPV1Worker::~rewardPV1Worker() {
  delete [] TheModelPtr;
}

double rewardPV1Worker::Reward_Function(void) {

return Formula->AccesstoOBDIIport->Mark();

return (0);



}

rewardPV1::rewardPV1(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheFormulaADVISE);
  double startpts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  double stoppts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  Initialize("OBDAccess",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("AccesstoOBDIIport","Formula");
}

rewardPV1::~rewardPV1() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void rewardPV1::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new rewardPV1Worker;
}
rewardPV2Worker::rewardPV2Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&Formula);
}

rewardPV2Worker::~rewardPV2Worker() {
  delete [] TheModelPtr;
}

double rewardPV2Worker::Reward_Function(void) {

return Formula->Telematicunitaccess->Mark();

return (0);



}

rewardPV2::rewardPV2(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheFormulaADVISE);
  double startpts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  double stoppts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  Initialize("TelematicUnitAccess",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("Telematicunitaccess","Formula");
}

rewardPV2::~rewardPV2() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void rewardPV2::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new rewardPV2Worker;
}
rewardPV3Worker::rewardPV3Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&Formula);
}

rewardPV3Worker::~rewardPV3Worker() {
  delete [] TheModelPtr;
}

double rewardPV3Worker::Reward_Function(void) {

return Formula->Validlinkwithcarbluetooth->Mark();

return (0);



}

rewardPV3::rewardPV3(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheFormulaADVISE);
  double startpts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  double stoppts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  Initialize("ValidBtCarLink",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("Validlinkwithcarbluetooth","Formula");
}

rewardPV3::~rewardPV3() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void rewardPV3::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new rewardPV3Worker;
}
rewardPV4Worker::rewardPV4Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&Formula);
}

rewardPV4Worker::~rewardPV4Worker() {
  delete [] TheModelPtr;
}

double rewardPV4Worker::Reward_Function(void) {

return Formula->Machineishijacked->Mark();

return (0);



}

rewardPV4::rewardPV4(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheFormulaADVISE);
  double startpts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  double stoppts[21]={0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0, 51.0, 54.0, 57.0, 60.0};
  Initialize("MachineHijacked",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("Machineishijacked","Formula");
}

rewardPV4::~rewardPV4() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void rewardPV4::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new rewardPV4Worker;
}
rewardPV5Worker::rewardPV5Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&Formula);
}

rewardPV5Worker::~rewardPV5Worker() {
  delete [] TheModelPtr;
}

double rewardPV5Worker::Reward_Function(void) {

return Formula->AccessToCANBus->Mark();

return (0);



}

rewardPV5::rewardPV5(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheFormulaADVISE);
  double startpts[1]={0.0};
  double stoppts[1]={0.0};
  Initialize("CANAccess",(RewardType)0,1, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("AccessToCANBus","Formula");
}

rewardPV5::~rewardPV5() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void rewardPV5::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new rewardPV5Worker;
}
