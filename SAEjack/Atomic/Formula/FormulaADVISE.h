#ifndef FormulaADVISE_H_
#define FormulaADVISE_H_

#include "Cpp/Simulator/UserDistributions.h"
#include "Cpp/BaseClasses/GlobalVariables.h"
#include "Cpp/BaseClasses/PostselectGroup.h"
#include "Cpp/BaseClasses/PreselectGroup.h"
#include "Cpp/BaseClasses/atomic/advise/ADVISEModel.h"
#include "Cpp/BaseClasses/atomic/advise/Access.h"
#include "Cpp/BaseClasses/atomic/advise/AdversaryDecision.h"
#include "Cpp/BaseClasses/atomic/advise/BeginAdversaryDecision.h"
#include "Cpp/BaseClasses/atomic/advise/Goal.h"
#include "Cpp/BaseClasses/atomic/advise/Knowledge.h"
#include "Cpp/BaseClasses/atomic/advise/Skill.h"
#include "Cpp/BaseClasses/atomic/advise/Step.h"
#include "Cpp/BaseClasses/atomic/advise/StepChosen.h"
#include "Cpp/BaseClasses/atomic/advise/StepWeight.h"
#include <limits.h>
#include <cmath>
extern Short Networkhackingprof;
extern Short Socialengineeringprof;
extern Short Systemhackingprof;
extern Short CANpacketforgingprof;
extern Short wantsHijackCar;
extern UserDistributions* TheDistribution;

/*********************************************************************
               FormulaADVISE Submodel Definition                   
*********************************************************************/

class FormulaADVISE : public ADVISEModel {
public:

class ForgevalidCANBUSpackagesAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *ForgevalidCANBUSpackagesChosen;
  short *ForgevalidCANBUSpackagesChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  double *TheDistributionParameters;

  ForgevalidCANBUSpackagesAdversaryDecision();
  ~ForgevalidCANBUSpackagesAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // ForgevalidCANBUSpackagesAdversaryDecision

class DoNothingAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *DoNothingChosen;
  short *DoNothingChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  double *TheDistributionParameters;

  DoNothingAdversaryDecision();
  ~DoNothingAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // DoNothingAdversaryDecision

class DDOStheCANBUSAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *DDOStheCANBUSChosen;
  short *DDOStheCANBUSChosen_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  double *TheDistributionParameters;

  DDOStheCANBUSAdversaryDecision();
  ~DDOStheCANBUSAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // DDOStheCANBUSAdversaryDecision

class ExecutearbitrarycodeonthetelematicsunitAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *ExecutearbitrarycodeonthetelematicsunitChosen;
  short *ExecutearbitrarycodeonthetelematicsunitChosen_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  double *TheDistributionParameters;

  ExecutearbitrarycodeonthetelematicsunitAdversaryDecision();
  ~ExecutearbitrarycodeonthetelematicsunitAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // ExecutearbitrarycodeonthetelematicsunitAdversaryDecision

class ExploituncheckedstrcpyAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *ExploituncheckedstrcpyChosen;
  short *ExploituncheckedstrcpyChosen_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  double *TheDistributionParameters;

  ExploituncheckedstrcpyAdversaryDecision();
  ~ExploituncheckedstrcpyAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // ExploituncheckedstrcpyAdversaryDecision

class InsertTrojaninuserphoneAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *InsertTrojaninuserphoneChosen;
  short *InsertTrojaninuserphoneChosen_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  double *TheDistributionParameters;

  InsertTrojaninuserphoneAdversaryDecision();
  ~InsertTrojaninuserphoneAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // InsertTrojaninuserphoneAdversaryDecision

class BruteforceBluetoothPINAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *BruteforceBluetoothPINChosen;
  short *BruteforceBluetoothPINChosen_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  double *TheDistributionParameters;

  BruteforceBluetoothPINAdversaryDecision();
  ~BruteforceBluetoothPINAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // BruteforceBluetoothPINAdversaryDecision

class AccessdealershipWIFIAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *AccessdealershipWIFIChosen;
  short *AccessdealershipWIFIChosen_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  double *TheDistributionParameters;

  AccessdealershipWIFIAdversaryDecision();
  ~AccessdealershipWIFIAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // AccessdealershipWIFIAdversaryDecision

class ShellinjectiononPassThruAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *ShellinjectiononPassThruChosen;
  short *ShellinjectiononPassThruChosen_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  double *TheDistributionParameters;

  ShellinjectiononPassThruAdversaryDecision();
  ~ShellinjectiononPassThruAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // ShellinjectiononPassThruAdversaryDecision

class SniffcarBluetoothMACaddressAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *SniffcarBluetoothMACaddressChosen;
  short *SniffcarBluetoothMACaddressChosen_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  double *TheDistributionParameters;

  SniffcarBluetoothMACaddressAdversaryDecision();
  ~SniffcarBluetoothMACaddressAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // SniffcarBluetoothMACaddressAdversaryDecision

class ProgramthecarECUsAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *ProgramthecarECUsChosen;
  short *ProgramthecarECUsChosen_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  double *TheDistributionParameters;

  ProgramthecarECUsAdversaryDecision();
  ~ProgramthecarECUsAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // ProgramthecarECUsAdversaryDecision

class ForgevalidCANBUSpackagesFailureStep : public Step {
public:

  Goal *Machineishijacked;
  short* Machineishijacked_Mobius_Mark;
  Skill *CANpacketforging;
  short* CANpacketforging_Mobius_Mark;
  Access *AccessToCANBus;
  short* AccessToCANBus_Mobius_Mark;
  StepChosen *ForgevalidCANBUSpackagesChosen;
  short *ForgevalidCANBUSpackagesChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  ForgevalidCANBUSpackagesFailureStep();
  ~ForgevalidCANBUSpackagesFailureStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // ForgevalidCANBUSpackagesFailureStep

class ForgevalidCANBUSpackagesSuccessStep : public Step {
public:

  Goal *Machineishijacked;
  short* Machineishijacked_Mobius_Mark;
  Skill *CANpacketforging;
  short* CANpacketforging_Mobius_Mark;
  Access *AccessToCANBus;
  short* AccessToCANBus_Mobius_Mark;
  StepChosen *ForgevalidCANBUSpackagesChosen;
  short *ForgevalidCANBUSpackagesChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  ForgevalidCANBUSpackagesSuccessStep();
  ~ForgevalidCANBUSpackagesSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // ForgevalidCANBUSpackagesSuccessStep

class DoNothingOutcome1Step : public Step {
public:

  StepChosen *DoNothingChosen;
  short *DoNothingChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  DoNothingOutcome1Step();
  ~DoNothingOutcome1Step();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // DoNothingOutcome1Step

class DDOStheCANBUSOutcome1Step : public Step {
public:

  Goal *Machineishijacked;
  short* Machineishijacked_Mobius_Mark;
  Access *AccessToCANBus;
  short* AccessToCANBus_Mobius_Mark;
  StepChosen *DDOStheCANBUSChosen;
  short *DDOStheCANBUSChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  DDOStheCANBUSOutcome1Step();
  ~DDOStheCANBUSOutcome1Step();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // DDOStheCANBUSOutcome1Step

class ExecutearbitrarycodeonthetelematicsunitSuccessStep : public Step {
public:

  Access *AccessToCANBus;
  short* AccessToCANBus_Mobius_Mark;
  Access *Telematicunitaccess;
  short* Telematicunitaccess_Mobius_Mark;
  StepChosen *ExecutearbitrarycodeonthetelematicsunitChosen;
  short *ExecutearbitrarycodeonthetelematicsunitChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  ExecutearbitrarycodeonthetelematicsunitSuccessStep();
  ~ExecutearbitrarycodeonthetelematicsunitSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // ExecutearbitrarycodeonthetelematicsunitSuccessStep

class ExploituncheckedstrcpySuccessStep : public Step {
public:

  Access *Telematicunitaccess;
  short* Telematicunitaccess_Mobius_Mark;
  Access *Validlinkwithcarbluetooth;
  short* Validlinkwithcarbluetooth_Mobius_Mark;
  Skill *Systemhacking;
  short* Systemhacking_Mobius_Mark;
  StepChosen *ExploituncheckedstrcpyChosen;
  short *ExploituncheckedstrcpyChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  ExploituncheckedstrcpySuccessStep();
  ~ExploituncheckedstrcpySuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // ExploituncheckedstrcpySuccessStep

class InsertTrojaninuserphoneSuccessStep : public Step {
public:

  Access *Validlinkwithcarbluetooth;
  short* Validlinkwithcarbluetooth_Mobius_Mark;
  Skill *Socialengineering;
  short* Socialengineering_Mobius_Mark;
  StepChosen *InsertTrojaninuserphoneChosen;
  short *InsertTrojaninuserphoneChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  InsertTrojaninuserphoneSuccessStep();
  ~InsertTrojaninuserphoneSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // InsertTrojaninuserphoneSuccessStep

class BruteforceBluetoothPINFailureStep : public Step {
public:

  Access *Validlinkwithcarbluetooth;
  short* Validlinkwithcarbluetooth_Mobius_Mark;
  Knowledge *MACaddressoftheCar;
  short* MACaddressoftheCar_Mobius_Mark;
  StepChosen *BruteforceBluetoothPINChosen;
  short *BruteforceBluetoothPINChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  BruteforceBluetoothPINFailureStep();
  ~BruteforceBluetoothPINFailureStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // BruteforceBluetoothPINFailureStep

class BruteforceBluetoothPINSuccessStep : public Step {
public:

  Access *Validlinkwithcarbluetooth;
  short* Validlinkwithcarbluetooth_Mobius_Mark;
  Knowledge *MACaddressoftheCar;
  short* MACaddressoftheCar_Mobius_Mark;
  StepChosen *BruteforceBluetoothPINChosen;
  short *BruteforceBluetoothPINChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  BruteforceBluetoothPINSuccessStep();
  ~BruteforceBluetoothPINSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // BruteforceBluetoothPINSuccessStep

class AccessdealershipWIFIFailureStep : public Step {
public:

  Access *Networkaccess;
  short* Networkaccess_Mobius_Mark;
  Skill *Networkhacking;
  short* Networkhacking_Mobius_Mark;
  Skill *Socialengineering;
  short* Socialengineering_Mobius_Mark;
  StepChosen *AccessdealershipWIFIChosen;
  short *AccessdealershipWIFIChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  AccessdealershipWIFIFailureStep();
  ~AccessdealershipWIFIFailureStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // AccessdealershipWIFIFailureStep

class AccessdealershipWIFISuccessStep : public Step {
public:

  Access *Networkaccess;
  short* Networkaccess_Mobius_Mark;
  Skill *Networkhacking;
  short* Networkhacking_Mobius_Mark;
  Skill *Socialengineering;
  short* Socialengineering_Mobius_Mark;
  StepChosen *AccessdealershipWIFIChosen;
  short *AccessdealershipWIFIChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  AccessdealershipWIFISuccessStep();
  ~AccessdealershipWIFISuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // AccessdealershipWIFISuccessStep

class ShellinjectiononPassThruSuccessStep : public Step {
public:

  Access *AccesstoOBDIIport;
  short* AccesstoOBDIIport_Mobius_Mark;
  Access *Networkaccess;
  short* Networkaccess_Mobius_Mark;
  Skill *Systemhacking;
  short* Systemhacking_Mobius_Mark;
  StepChosen *ShellinjectiononPassThruChosen;
  short *ShellinjectiononPassThruChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  ShellinjectiononPassThruSuccessStep();
  ~ShellinjectiononPassThruSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // ShellinjectiononPassThruSuccessStep

class SniffcarBluetoothMACaddressSuccessStep : public Step {
public:

  Knowledge *MACaddressoftheCar;
  short* MACaddressoftheCar_Mobius_Mark;
  Skill *Networkhacking;
  short* Networkhacking_Mobius_Mark;
  StepChosen *SniffcarBluetoothMACaddressChosen;
  short *SniffcarBluetoothMACaddressChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  SniffcarBluetoothMACaddressSuccessStep();
  ~SniffcarBluetoothMACaddressSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // SniffcarBluetoothMACaddressSuccessStep

class ProgramthecarECUsOutcome1Step : public Step {
public:

  Access *AccessToCANBus;
  short* AccessToCANBus_Mobius_Mark;
  Access *AccesstoOBDIIport;
  short* AccesstoOBDIIport_Mobius_Mark;
  StepChosen *ProgramthecarECUsChosen;
  short *ProgramthecarECUsChosen_Mobius_Mark;
  StepWeight *ForgevalidCANBUSpackagesWeight;
  short *ForgevalidCANBUSpackagesWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *DDOStheCANBUSWeight;
  short *DDOStheCANBUSWeight_Mobius_Mark;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  short *ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark;
  StepWeight *ExploituncheckedstrcpyWeight;
  short *ExploituncheckedstrcpyWeight_Mobius_Mark;
  StepWeight *InsertTrojaninuserphoneWeight;
  short *InsertTrojaninuserphoneWeight_Mobius_Mark;
  StepWeight *BruteforceBluetoothPINWeight;
  short *BruteforceBluetoothPINWeight_Mobius_Mark;
  StepWeight *AccessdealershipWIFIWeight;
  short *AccessdealershipWIFIWeight_Mobius_Mark;
  StepWeight *ShellinjectiononPassThruWeight;
  short *ShellinjectiononPassThruWeight_Mobius_Mark;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  short *SniffcarBluetoothMACaddressWeight_Mobius_Mark;
  StepWeight *ProgramthecarECUsWeight;
  short *ProgramthecarECUsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  ProgramthecarECUsOutcome1Step();
  ~ProgramthecarECUsOutcome1Step();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // ProgramthecarECUsOutcome1Step

  //List of user-specified state variables
  Access *AccessToCANBus;
  Access *Telematicunitaccess;
  Access *AccesstoOBDIIport;
  Access *Networkaccess;
  Access *Validlinkwithcarbluetooth;
  Knowledge *MACaddressoftheCar;
  Skill *CANpacketforging;
  Skill *Socialengineering;
  Skill *Networkhacking;
  Skill *Systemhacking;
  Goal *Machineishijacked;
  //List of attack step weight state variables
  StepWeight *ForgevalidCANBUSpackagesWeight;
  StepWeight *DoNothingWeight;
  StepWeight *DDOStheCANBUSWeight;
  StepWeight *ExecutearbitrarycodeonthetelematicsunitWeight;
  StepWeight *ExploituncheckedstrcpyWeight;
  StepWeight *InsertTrojaninuserphoneWeight;
  StepWeight *BruteforceBluetoothPINWeight;
  StepWeight *AccessdealershipWIFIWeight;
  StepWeight *ShellinjectiononPassThruWeight;
  StepWeight *SniffcarBluetoothMACaddressWeight;
  StepWeight *ProgramthecarECUsWeight;
  //List of attack step chosen state variables
  StepChosen *ForgevalidCANBUSpackagesChosen;
  StepChosen *DoNothingChosen;
  StepChosen *DDOStheCANBUSChosen;
  StepChosen *ExecutearbitrarycodeonthetelematicsunitChosen;
  StepChosen *ExploituncheckedstrcpyChosen;
  StepChosen *InsertTrojaninuserphoneChosen;
  StepChosen *BruteforceBluetoothPINChosen;
  StepChosen *AccessdealershipWIFIChosen;
  StepChosen *ShellinjectiononPassThruChosen;
  StepChosen *SniffcarBluetoothMACaddressChosen;
  StepChosen *ProgramthecarECUsChosen;
  //List of attack steps
  ForgevalidCANBUSpackagesFailureStep ForgevalidCANBUSpackagesFailure;
  ForgevalidCANBUSpackagesSuccessStep ForgevalidCANBUSpackagesSuccess;
  DoNothingOutcome1Step DoNothingOutcome1;
  DDOStheCANBUSOutcome1Step DDOStheCANBUSOutcome1;
  ExecutearbitrarycodeonthetelematicsunitSuccessStep ExecutearbitrarycodeonthetelematicsunitSuccess;
  ExploituncheckedstrcpySuccessStep ExploituncheckedstrcpySuccess;
  InsertTrojaninuserphoneSuccessStep InsertTrojaninuserphoneSuccess;
  BruteforceBluetoothPINFailureStep BruteforceBluetoothPINFailure;
  BruteforceBluetoothPINSuccessStep BruteforceBluetoothPINSuccess;
  AccessdealershipWIFIFailureStep AccessdealershipWIFIFailure;
  AccessdealershipWIFISuccessStep AccessdealershipWIFISuccess;
  ShellinjectiononPassThruSuccessStep ShellinjectiononPassThruSuccess;
  SniffcarBluetoothMACaddressSuccessStep SniffcarBluetoothMACaddressSuccess;
  ProgramthecarECUsOutcome1Step ProgramthecarECUsOutcome1;
  ForgevalidCANBUSpackagesAdversaryDecision ForgevalidCANBUSpackagesAD;
  DoNothingAdversaryDecision DoNothingAD;
  DDOStheCANBUSAdversaryDecision DDOStheCANBUSAD;
  ExecutearbitrarycodeonthetelematicsunitAdversaryDecision ExecutearbitrarycodeonthetelematicsunitAD;
  ExploituncheckedstrcpyAdversaryDecision ExploituncheckedstrcpyAD;
  InsertTrojaninuserphoneAdversaryDecision InsertTrojaninuserphoneAD;
  BruteforceBluetoothPINAdversaryDecision BruteforceBluetoothPINAD;
  AccessdealershipWIFIAdversaryDecision AccessdealershipWIFIAD;
  ShellinjectiononPassThruAdversaryDecision ShellinjectiononPassThruAD;
  SniffcarBluetoothMACaddressAdversaryDecision SniffcarBluetoothMACaddressAD;
  ProgramthecarECUsAdversaryDecision ProgramthecarECUsAD;
  //Groups for attack steps
  PreselectGroup ImmediateGroup;
  PostselectGroup ForgevalidCANBUSpackagesGroup;
  PostselectGroup BruteforceBluetoothPINGroup;
  PostselectGroup AccessdealershipWIFIGroup;
  PostselectGroup AdversaryDecisionGroup;
  FormulaADVISE();
  ~FormulaADVISE();
  void assignSVsToAttackSteps();
  double convertCostToUtility(double cost);
  double convertDetectionToUtility(double detections);
  double convertPayoffToUtility(double payoff);
  void customInitialization();

protected:
}; // end FormulaADVISE

#endif // FormulaADVISE_H_
