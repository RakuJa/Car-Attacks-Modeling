#ifndef _REWARD_PVS_
#define _REWARD_PVS_
#include <math.h>
#include "Cpp/Performance_Variables/PerformanceVariableNode.hpp"
#include "Atomic/Formula/FormulaADVISE.h"
#include "Cpp/Performance_Variables/InstantOfTime.hpp"


class rewardPV0Worker:public InstantOfTime
{
 public:
  FormulaADVISE *Formula;
  
  rewardPV0Worker();
  ~rewardPV0Worker();
  double Reward_Function();
};

class rewardPV0:public PerformanceVariableNode
{
 public:
  FormulaADVISE *TheFormulaADVISE;

  rewardPV0Worker *rewardPV0WorkerList;

  rewardPV0(int timeindex=0);
  ~rewardPV0();
  void CreateWorkerList(void);
};

class rewardPV1Worker:public InstantOfTime
{
 public:
  FormulaADVISE *Formula;
  
  rewardPV1Worker();
  ~rewardPV1Worker();
  double Reward_Function();
};

class rewardPV1:public PerformanceVariableNode
{
 public:
  FormulaADVISE *TheFormulaADVISE;

  rewardPV1Worker *rewardPV1WorkerList;

  rewardPV1(int timeindex=0);
  ~rewardPV1();
  void CreateWorkerList(void);
};

class rewardPV2Worker:public InstantOfTime
{
 public:
  FormulaADVISE *Formula;
  
  rewardPV2Worker();
  ~rewardPV2Worker();
  double Reward_Function();
};

class rewardPV2:public PerformanceVariableNode
{
 public:
  FormulaADVISE *TheFormulaADVISE;

  rewardPV2Worker *rewardPV2WorkerList;

  rewardPV2(int timeindex=0);
  ~rewardPV2();
  void CreateWorkerList(void);
};

class rewardPV3Worker:public InstantOfTime
{
 public:
  FormulaADVISE *Formula;
  
  rewardPV3Worker();
  ~rewardPV3Worker();
  double Reward_Function();
};

class rewardPV3:public PerformanceVariableNode
{
 public:
  FormulaADVISE *TheFormulaADVISE;

  rewardPV3Worker *rewardPV3WorkerList;

  rewardPV3(int timeindex=0);
  ~rewardPV3();
  void CreateWorkerList(void);
};

class rewardPV4Worker:public InstantOfTime
{
 public:
  FormulaADVISE *Formula;
  
  rewardPV4Worker();
  ~rewardPV4Worker();
  double Reward_Function();
};

class rewardPV4:public PerformanceVariableNode
{
 public:
  FormulaADVISE *TheFormulaADVISE;

  rewardPV4Worker *rewardPV4WorkerList;

  rewardPV4(int timeindex=0);
  ~rewardPV4();
  void CreateWorkerList(void);
};

class rewardPV5Worker:public InstantOfTime
{
 public:
  FormulaADVISE *Formula;
  
  rewardPV5Worker();
  ~rewardPV5Worker();
  double Reward_Function();
};

class rewardPV5:public PerformanceVariableNode
{
 public:
  FormulaADVISE *TheFormulaADVISE;

  rewardPV5Worker *rewardPV5WorkerList;

  rewardPV5(int timeindex=0);
  ~rewardPV5();
  void CreateWorkerList(void);
};

#endif
