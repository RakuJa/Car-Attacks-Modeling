
#ifndef studyRangeSTUDY_H_
#define studyRangeSTUDY_H_

#include "Reward/reward/rewardPVNodes.h"
#include "Reward/reward/rewardPVModel.h"
#include "Cpp/BaseClasses/GlobalVariables.h"
#include "Cpp/Study/BaseStudyClass.hpp"

extern Short CANpacketforgingprof;
extern Short Networkhackingprof;
extern Short Socialengineeringprof;
extern Short Systemhackingprof;
extern Short wantsHijackCar;

class studyRangeStudy : public BaseStudyClass {
public:

studyRangeStudy();
~studyRangeStudy();

private:

short *CANpacketforgingprofValues;
short *NetworkhackingprofValues;
short *SocialengineeringprofValues;
short *SystemhackingprofValues;
short *wantsHijackCarValues;

void SetValues_CANpacketforgingprof();
void SetValues_Networkhackingprof();
void SetValues_Socialengineeringprof();
void SetValues_Systemhackingprof();
void SetValues_wantsHijackCar();

void PrintGlobalValues(int);
void *GetGVValue(char *TheGVName);
void OverrideGVValue(char *TheGVName, void *TheGVValue);
void SetGVs(int expnum);
PVModel *GetPVModel(bool expandTimeArrays);
};

#endif

