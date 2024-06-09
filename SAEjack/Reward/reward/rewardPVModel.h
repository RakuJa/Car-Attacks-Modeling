#ifndef _REWARD_PVMODEL_
#define _REWARD_PVMODEL_
#include "rewardPVNodes.h"
#include "Cpp/Performance_Variables/PVModel.hpp"
#include "Atomic/Formula/FormulaADVISE.h"
class rewardPVModel:public PVModel {
 protected:
  PerformanceVariableNode *createPVNode(int pvindex, int timeindex);
 public:
  rewardPVModel(bool expandtimepoints);
};

#endif
