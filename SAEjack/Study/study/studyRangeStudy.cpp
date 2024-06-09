
#include "Study/study/studyRangeStudy.h"

//******************************************************
//Global Variables
//******************************************************
Short CANpacketforgingprof;
Short Networkhackingprof;
Short Socialengineeringprof;
Short Systemhackingprof;
Short wantsHijackCar;

//********************************************************
//studyRangeStudy Constructor
//********************************************************
studyRangeStudy::studyRangeStudy() {

  // define arrays of global variable names and types
  NumGVs = 5;
  NumExps = 16;

  GVNames = new char*[NumGVs];
  GVTypes = new char*[NumGVs];
  GVNames[0]=strdup("CANpacketforgingprof");
  GVTypes[0]=strdup("short");
  GVNames[1]=strdup("Networkhackingprof");
  GVTypes[1]=strdup("short");
  GVNames[2]=strdup("Socialengineeringprof");
  GVTypes[2]=strdup("short");
  GVNames[3]=strdup("Systemhackingprof");
  GVTypes[3]=strdup("short");
  GVNames[4]=strdup("wantsHijackCar");
  GVTypes[4]=strdup("short");

  // create the arrays to store the values of each gv
  CANpacketforgingprofValues = new short[NumExps];
  NetworkhackingprofValues = new short[NumExps];
  SocialengineeringprofValues = new short[NumExps];
  SystemhackingprofValues = new short[NumExps];
  wantsHijackCarValues = new short[NumExps];

  // call methods to assign values to each gv
  SetValues_CANpacketforgingprof();
  SetValues_Networkhackingprof();
  SetValues_Socialengineeringprof();
  SetValues_Systemhackingprof();
  SetValues_wantsHijackCar();
  SetDefaultMobiusRoot(MOBIUSROOT);
}


//******************************************************
//studyRangeStudy Destructor
//******************************************************
studyRangeStudy::~studyRangeStudy() {
  delete [] CANpacketforgingprofValues;
  delete [] NetworkhackingprofValues;
  delete [] SocialengineeringprofValues;
  delete [] SystemhackingprofValues;
  delete [] wantsHijackCarValues;
  delete ThePVModel;
}


//******************************************************
// set values for CANpacketforgingprof
//******************************************************
void studyRangeStudy::SetValues_CANpacketforgingprof() {
  CANpacketforgingprofValues[0] = 0;
  CANpacketforgingprofValues[1] = 100;
  CANpacketforgingprofValues[2] = 0;
  CANpacketforgingprofValues[3] = 100;
  CANpacketforgingprofValues[4] = 0;
  CANpacketforgingprofValues[5] = 100;
  CANpacketforgingprofValues[6] = 0;
  CANpacketforgingprofValues[7] = 100;
  CANpacketforgingprofValues[8] = 0;
  CANpacketforgingprofValues[9] = 100;
  CANpacketforgingprofValues[10] = 0;
  CANpacketforgingprofValues[11] = 100;
  CANpacketforgingprofValues[12] = 0;
  CANpacketforgingprofValues[13] = 100;
  CANpacketforgingprofValues[14] = 0;
  CANpacketforgingprofValues[15] = 100;
}


//******************************************************
// set values for Networkhackingprof
//******************************************************
void studyRangeStudy::SetValues_Networkhackingprof() {
  NetworkhackingprofValues[0] = 0;
  NetworkhackingprofValues[1] = 0;
  NetworkhackingprofValues[2] = 100;
  NetworkhackingprofValues[3] = 100;
  NetworkhackingprofValues[4] = 0;
  NetworkhackingprofValues[5] = 0;
  NetworkhackingprofValues[6] = 100;
  NetworkhackingprofValues[7] = 100;
  NetworkhackingprofValues[8] = 0;
  NetworkhackingprofValues[9] = 0;
  NetworkhackingprofValues[10] = 100;
  NetworkhackingprofValues[11] = 100;
  NetworkhackingprofValues[12] = 0;
  NetworkhackingprofValues[13] = 0;
  NetworkhackingprofValues[14] = 100;
  NetworkhackingprofValues[15] = 100;
}


//******************************************************
// set values for Socialengineeringprof
//******************************************************
void studyRangeStudy::SetValues_Socialengineeringprof() {
  SocialengineeringprofValues[0] = 0;
  SocialengineeringprofValues[1] = 0;
  SocialengineeringprofValues[2] = 0;
  SocialengineeringprofValues[3] = 0;
  SocialengineeringprofValues[4] = 100;
  SocialengineeringprofValues[5] = 100;
  SocialengineeringprofValues[6] = 100;
  SocialengineeringprofValues[7] = 100;
  SocialengineeringprofValues[8] = 0;
  SocialengineeringprofValues[9] = 0;
  SocialengineeringprofValues[10] = 0;
  SocialengineeringprofValues[11] = 0;
  SocialengineeringprofValues[12] = 100;
  SocialengineeringprofValues[13] = 100;
  SocialengineeringprofValues[14] = 100;
  SocialengineeringprofValues[15] = 100;
}


//******************************************************
// set values for Systemhackingprof
//******************************************************
void studyRangeStudy::SetValues_Systemhackingprof() {
  SystemhackingprofValues[0] = 0;
  SystemhackingprofValues[1] = 0;
  SystemhackingprofValues[2] = 0;
  SystemhackingprofValues[3] = 0;
  SystemhackingprofValues[4] = 0;
  SystemhackingprofValues[5] = 0;
  SystemhackingprofValues[6] = 0;
  SystemhackingprofValues[7] = 0;
  SystemhackingprofValues[8] = 100;
  SystemhackingprofValues[9] = 100;
  SystemhackingprofValues[10] = 100;
  SystemhackingprofValues[11] = 100;
  SystemhackingprofValues[12] = 100;
  SystemhackingprofValues[13] = 100;
  SystemhackingprofValues[14] = 100;
  SystemhackingprofValues[15] = 100;
}


//******************************************************
// set values for wantsHijackCar
//******************************************************
void studyRangeStudy::SetValues_wantsHijackCar() {
  for (int n=0; n<NumExps; n++)
    wantsHijackCarValues[n] = 1000;
}



//******************************************************
//print values of gv (for debugging)
//******************************************************
void studyRangeStudy::PrintGlobalValues(int expNum) {
  if (NumGVs == 0) {
    cout<<"There are no global variables."<<endl;
    return;
  }

  SetGVs(expNum);

  cout<<"The Global Variable values for experiment "<<
    GetExpName(expNum)<<" are:"<<endl;
  cout << "CANpacketforgingprof\tshort\t" << CANpacketforgingprof << endl;
  cout << "Networkhackingprof\tshort\t" << Networkhackingprof << endl;
  cout << "Socialengineeringprof\tshort\t" << Socialengineeringprof << endl;
  cout << "Systemhackingprof\tshort\t" << Systemhackingprof << endl;
  cout << "wantsHijackCar\tshort\t" << wantsHijackCar << endl;
}


//******************************************************
//retrieve the value of a global variable
//******************************************************
void *studyRangeStudy::GetGVValue(char *TheGVName) {
  if (strcmp("CANpacketforgingprof", TheGVName) == 0)
    return &CANpacketforgingprof;
  else if (strcmp("Networkhackingprof", TheGVName) == 0)
    return &Networkhackingprof;
  else if (strcmp("Socialengineeringprof", TheGVName) == 0)
    return &Socialengineeringprof;
  else if (strcmp("Systemhackingprof", TheGVName) == 0)
    return &Systemhackingprof;
  else if (strcmp("wantsHijackCar", TheGVName) == 0)
    return &wantsHijackCar;
  else 
    cerr<<"!! studyRangeStudy::GetGVValue: Global Variable "<<TheGVName<<" does not exist."<<endl;
  return NULL;
}


//******************************************************
//override the value of a global variable
//******************************************************
void studyRangeStudy::OverrideGVValue(char *TheGVName,void *TheGVValue) {
  if (strcmp("CANpacketforgingprof", TheGVName) == 0)
    SetGvValue(CANpacketforgingprof, *(short *)TheGVValue);
  else if (strcmp("Networkhackingprof", TheGVName) == 0)
    SetGvValue(Networkhackingprof, *(short *)TheGVValue);
  else if (strcmp("Socialengineeringprof", TheGVName) == 0)
    SetGvValue(Socialengineeringprof, *(short *)TheGVValue);
  else if (strcmp("Systemhackingprof", TheGVName) == 0)
    SetGvValue(Systemhackingprof, *(short *)TheGVValue);
  else if (strcmp("wantsHijackCar", TheGVName) == 0)
    SetGvValue(wantsHijackCar, *(short *)TheGVValue);
  else 
    cerr<<"!! studyRangeStudy::OverrideGVValue: Global Variable "<<TheGVName<<" does not exist."<<endl;
}


//******************************************************
//set the value of all global variables to the given exp
//******************************************************
void studyRangeStudy::SetGVs(int expNum) {
  SetGvValue(CANpacketforgingprof, CANpacketforgingprofValues[expNum]);
  SetGvValue(Networkhackingprof, NetworkhackingprofValues[expNum]);
  SetGvValue(Socialengineeringprof, SocialengineeringprofValues[expNum]);
  SetGvValue(Systemhackingprof, SystemhackingprofValues[expNum]);
  SetGvValue(wantsHijackCar, wantsHijackCarValues[expNum]);
}


//******************************************************
//static class method called by solvers to create study 
//(and thus create all of the model)
//******************************************************
BaseStudyClass* GlobalStudyPtr = NULL;
BaseStudyClass * GenerateStudy() {
  if (GlobalStudyPtr == NULL)
    GlobalStudyPtr = new studyRangeStudy();
  return GlobalStudyPtr;
}

void DestructStudy() {
  delete GlobalStudyPtr;
  GlobalStudyPtr = NULL;
}
//******************************************************
//get and create the PVModel
//******************************************************
PVModel* studyRangeStudy::GetPVModel(bool expandTimeArrays) {
  if (ThePVModel!=NULL)
    delete ThePVModel;
  // create the PV model
  ThePVModel=new rewardPVModel(expandTimeArrays);
  return ThePVModel;
}


