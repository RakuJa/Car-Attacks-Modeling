
#include "Atomic/Formula/FormulaADVISE.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>


FormulaADVISE::FormulaADVISE() {
  ForgevalidCANBUSpackagesAD.setParent(this);
  DoNothingAD.setParent(this);
  DDOStheCANBUSAD.setParent(this);
  ExecutearbitrarycodeonthetelematicsunitAD.setParent(this);
  ExploituncheckedstrcpyAD.setParent(this);
  InsertTrojaninuserphoneAD.setParent(this);
  BruteforceBluetoothPINAD.setParent(this);
  AccessdealershipWIFIAD.setParent(this);
  ShellinjectiononPassThruAD.setParent(this);
  SniffcarBluetoothMACaddressAD.setParent(this);
  ProgramthecarECUsAD.setParent(this);
  ForgevalidCANBUSpackagesFailure.setParent(this);
  ForgevalidCANBUSpackagesSuccess.setParent(this);
  DoNothingOutcome1.setParent(this);
  DDOStheCANBUSOutcome1.setParent(this);
  ExecutearbitrarycodeonthetelematicsunitSuccess.setParent(this);
  ExploituncheckedstrcpySuccess.setParent(this);
  InsertTrojaninuserphoneSuccess.setParent(this);
  BruteforceBluetoothPINFailure.setParent(this);
  BruteforceBluetoothPINSuccess.setParent(this);
  AccessdealershipWIFIFailure.setParent(this);
  AccessdealershipWIFISuccess.setParent(this);
  ShellinjectiononPassThruSuccess.setParent(this);
  SniffcarBluetoothMACaddressSuccess.setParent(this);
  ProgramthecarECUsOutcome1.setParent(this);
  ForgevalidCANBUSpackagesGroup.initialize(2, "ForgevalidCANBUSpackagesGroup");
  ForgevalidCANBUSpackagesGroup.appendGroup((BaseGroupClass*) &ForgevalidCANBUSpackagesFailure);
  ForgevalidCANBUSpackagesGroup.appendGroup((BaseGroupClass*) &ForgevalidCANBUSpackagesSuccess);

  BruteforceBluetoothPINGroup.initialize(2, "BruteforceBluetoothPINGroup");
  BruteforceBluetoothPINGroup.appendGroup((BaseGroupClass*) &BruteforceBluetoothPINFailure);
  BruteforceBluetoothPINGroup.appendGroup((BaseGroupClass*) &BruteforceBluetoothPINSuccess);

  AccessdealershipWIFIGroup.initialize(2, "AccessdealershipWIFIGroup");
  AccessdealershipWIFIGroup.appendGroup((BaseGroupClass*) &AccessdealershipWIFIFailure);
  AccessdealershipWIFIGroup.appendGroup((BaseGroupClass*) &AccessdealershipWIFISuccess);

  AdversaryDecisionGroup.initialize(11, "AdversaryDecisionGroup");
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &ForgevalidCANBUSpackagesAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &DoNothingAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &DDOStheCANBUSAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &ExecutearbitrarycodeonthetelematicsunitAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &ExploituncheckedstrcpyAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &InsertTrojaninuserphoneAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &BruteforceBluetoothPINAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &AccessdealershipWIFIAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &ShellinjectiononPassThruAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &SniffcarBluetoothMACaddressAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &ProgramthecarECUsAD);

  BaseADVISEAction* InitialActions[25] = {
    &ForgevalidCANBUSpackagesAD, // 0
    &DoNothingAD, // 1
    &DDOStheCANBUSAD, // 2
    &ExecutearbitrarycodeonthetelematicsunitAD, // 3
    &ExploituncheckedstrcpyAD, // 4
    &InsertTrojaninuserphoneAD, // 5
    &BruteforceBluetoothPINAD, // 6
    &AccessdealershipWIFIAD, // 7
    &ShellinjectiononPassThruAD, // 8
    &SniffcarBluetoothMACaddressAD, // 9
    &ProgramthecarECUsAD, // 10
    &ForgevalidCANBUSpackagesFailure, // 11
    &ForgevalidCANBUSpackagesSuccess, // 12
    &DoNothingOutcome1, // 13
    &DDOStheCANBUSOutcome1, // 14
    &ExecutearbitrarycodeonthetelematicsunitSuccess, // 15
    &ExploituncheckedstrcpySuccess, // 16
    &InsertTrojaninuserphoneSuccess, // 17
    &BruteforceBluetoothPINFailure, // 18
    &BruteforceBluetoothPINSuccess, // 19
    &AccessdealershipWIFIFailure, // 20
    &AccessdealershipWIFISuccess, // 21
    &ShellinjectiononPassThruSuccess, // 22
    &SniffcarBluetoothMACaddressSuccess, // 23
    &ProgramthecarECUsOutcome1 // 24
  };

  Step* InitialSteps[14] = {
      &ForgevalidCANBUSpackagesFailure,
      &ForgevalidCANBUSpackagesSuccess,
      &DoNothingOutcome1,
      &DDOStheCANBUSOutcome1,
      &ExecutearbitrarycodeonthetelematicsunitSuccess,
      &ExploituncheckedstrcpySuccess,
      &InsertTrojaninuserphoneSuccess,
      &BruteforceBluetoothPINFailure,
      &BruteforceBluetoothPINSuccess,
      &AccessdealershipWIFIFailure,
      &AccessdealershipWIFISuccess,
      &ShellinjectiononPassThruSuccess,
      &SniffcarBluetoothMACaddressSuccess,
      &ProgramthecarECUsOutcome1
  };

  BaseGroupClass* InitialGroups[12] = {
    (BaseGroupClass*) &ForgevalidCANBUSpackagesGroup, // 0
    (BaseGroupClass*) &DoNothingOutcome1, // 1
    (BaseGroupClass*) &DDOStheCANBUSOutcome1, // 2
    (BaseGroupClass*) &ExecutearbitrarycodeonthetelematicsunitSuccess, // 3
    (BaseGroupClass*) &ExploituncheckedstrcpySuccess, // 4
    (BaseGroupClass*) &InsertTrojaninuserphoneSuccess, // 5
    (BaseGroupClass*) &BruteforceBluetoothPINGroup, // 6
    (BaseGroupClass*) &AccessdealershipWIFIGroup, // 7
    (BaseGroupClass*) &ShellinjectiononPassThruSuccess, // 8
    (BaseGroupClass*) &SniffcarBluetoothMACaddressSuccess, // 9
    (BaseGroupClass*) &ProgramthecarECUsOutcome1, // 10
    (BaseGroupClass*) &AdversaryDecisionGroup
  };

  AccessToCANBus = new Access("AccessToCANBus", 0);
  Telematicunitaccess = new Access("Telematicunitaccess", 0);
  AccesstoOBDIIport = new Access("AccesstoOBDIIport", 0);
  Networkaccess = new Access("Networkaccess", 0);
  Validlinkwithcarbluetooth = new Access("Validlinkwithcarbluetooth", 0);
  MACaddressoftheCar = new Knowledge("MACaddressoftheCar", 0);
  CANpacketforging = new Skill("CANpacketforging", CANpacketforgingprof);
  Socialengineering = new Skill("Socialengineering", Socialengineeringprof);
  Networkhacking = new Skill("Networkhacking", Networkhackingprof);
  Systemhacking = new Skill("Systemhacking", Systemhackingprof);
  Machineishijacked = new Goal("Machineishijacked", 0);
  Machineishijacked->setPayoff(wantsHijackCar);
  MakeDecision = new BeginAdversaryDecision("MakeDecision", 0);
  ForgevalidCANBUSpackagesWeight = new StepWeight("ForgevalidCANBUSpackagesWeight", 0);
  ForgevalidCANBUSpackagesChosen = new StepChosen("ForgevalidCANBUSpackagesChosen", 0);
  DoNothingWeight = new StepWeight("DoNothingWeight", 0);
  DoNothingChosen = new StepChosen("DoNothingChosen", 0);
  DDOStheCANBUSWeight = new StepWeight("DDOStheCANBUSWeight", 0);
  DDOStheCANBUSChosen = new StepChosen("DDOStheCANBUSChosen", 0);
  ExecutearbitrarycodeonthetelematicsunitWeight = new StepWeight("ExecutearbitrarycodeonthetelematicsunitWeight", 0);
  ExecutearbitrarycodeonthetelematicsunitChosen = new StepChosen("ExecutearbitrarycodeonthetelematicsunitChosen", 0);
  ExploituncheckedstrcpyWeight = new StepWeight("ExploituncheckedstrcpyWeight", 0);
  ExploituncheckedstrcpyChosen = new StepChosen("ExploituncheckedstrcpyChosen", 0);
  InsertTrojaninuserphoneWeight = new StepWeight("InsertTrojaninuserphoneWeight", 0);
  InsertTrojaninuserphoneChosen = new StepChosen("InsertTrojaninuserphoneChosen", 0);
  BruteforceBluetoothPINWeight = new StepWeight("BruteforceBluetoothPINWeight", 0);
  BruteforceBluetoothPINChosen = new StepChosen("BruteforceBluetoothPINChosen", 0);
  AccessdealershipWIFIWeight = new StepWeight("AccessdealershipWIFIWeight", 0);
  AccessdealershipWIFIChosen = new StepChosen("AccessdealershipWIFIChosen", 0);
  ShellinjectiononPassThruWeight = new StepWeight("ShellinjectiononPassThruWeight", 0);
  ShellinjectiononPassThruChosen = new StepChosen("ShellinjectiononPassThruChosen", 0);
  SniffcarBluetoothMACaddressWeight = new StepWeight("SniffcarBluetoothMACaddressWeight", 0);
  SniffcarBluetoothMACaddressChosen = new StepChosen("SniffcarBluetoothMACaddressChosen", 0);
  ProgramthecarECUsWeight = new StepWeight("ProgramthecarECUsWeight", 0);
  ProgramthecarECUsChosen = new StepChosen("ProgramthecarECUsChosen", 0);

  Goal* InitialGoals[1] = {
      Machineishijacked
  };

  ADVISEStateVariable* InitialSVs[34] = {
    AccessToCANBus, // 0
    Telematicunitaccess, // 1
    AccesstoOBDIIport, // 2
    Networkaccess, // 3
    Validlinkwithcarbluetooth, // 4
    MACaddressoftheCar, // 5
    CANpacketforging, // 6
    Socialengineering, // 7
    Networkhacking, // 8
    Systemhacking, // 9
    Machineishijacked, // 10
    ForgevalidCANBUSpackagesChosen, // 11
    DoNothingChosen, // 12
    DDOStheCANBUSChosen, // 13
    ExecutearbitrarycodeonthetelematicsunitChosen, // 14
    ExploituncheckedstrcpyChosen, // 15
    InsertTrojaninuserphoneChosen, // 16
    BruteforceBluetoothPINChosen, // 17
    AccessdealershipWIFIChosen, // 18
    ShellinjectiononPassThruChosen, // 19
    SniffcarBluetoothMACaddressChosen, // 20
    ProgramthecarECUsChosen, // 21
    ForgevalidCANBUSpackagesWeight, // 22
    DoNothingWeight, // 23
    DDOStheCANBUSWeight, // 24
    ExecutearbitrarycodeonthetelematicsunitWeight, // 25
    ExploituncheckedstrcpyWeight, // 26
    InsertTrojaninuserphoneWeight, // 27
    BruteforceBluetoothPINWeight, // 28
    AccessdealershipWIFIWeight, // 29
    ShellinjectiononPassThruWeight, // 30
    SniffcarBluetoothMACaddressWeight, // 31
    ProgramthecarECUsWeight, // 32
    MakeDecision // 33
};

  int outCounts[11] = { 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1 };

  commonInit("Formula", 34, InitialSVs, 25, InitialActions, 12, InitialGroups, 11, outCounts, InitialSteps, 1, InitialGoals);

  advCostPref = 0.2;
  advDetectPref = 0.5;
  advPayPref = 0.3;

  planningHorizon = 5;
  costDiscount = 1.0;
  detectionDiscount = 1.0;
  payoffDiscount = 1.0;

  assignSVsToAttackSteps();

  int AffectArcs[237][2] = {
    {33,0}, {11,0}, {22,0}, {33,1}, {12,1}, {23,1}, {33,2}, {13,2}, 
    {24,2}, {33,3}, {14,3}, {25,3}, {33,4}, {15,4}, {26,4}, {33,5}, 
    {16,5}, {27,5}, {33,6}, {17,6}, {28,6}, {33,7}, {18,7}, {29,7}, 
    {33,8}, {19,8}, {30,8}, {33,9}, {20,9}, {31,9}, {33,10}, {21,10}, 
    {32,10}, {33,11}, {11,11}, {22,11}, {23,11}, {24,11}, {25,11}, {26,11}, 
    {27,11}, {28,11}, {29,11}, {30,11}, {31,11}, {32,11}, {10,11}, {0,11}, 
    {33,12}, {11,12}, {22,12}, {23,12}, {24,12}, {25,12}, {26,12}, {27,12}, 
    {28,12}, {29,12}, {30,12}, {31,12}, {32,12}, {10,12}, {0,12}, {33,13}, 
    {12,13}, {22,13}, {23,13}, {24,13}, {25,13}, {26,13}, {27,13}, {28,13}, 
    {29,13}, {30,13}, {31,13}, {32,13}, {33,14}, {13,14}, {22,14}, {23,14}, 
    {24,14}, {25,14}, {26,14}, {27,14}, {28,14}, {29,14}, {30,14}, {31,14}, 
    {32,14}, {10,14}, {0,14}, {33,15}, {14,15}, {22,15}, {23,15}, {24,15}, 
    {25,15}, {26,15}, {27,15}, {28,15}, {29,15}, {30,15}, {31,15}, {32,15}, 
    {0,15}, {1,15}, {33,16}, {15,16}, {22,16}, {23,16}, {24,16}, {25,16}, 
    {26,16}, {27,16}, {28,16}, {29,16}, {30,16}, {31,16}, {32,16}, {1,16}, 
    {4,16}, {33,17}, {16,17}, {22,17}, {23,17}, {24,17}, {25,17}, {26,17}, 
    {27,17}, {28,17}, {29,17}, {30,17}, {31,17}, {32,17}, {4,17}, {33,18}, 
    {17,18}, {22,18}, {23,18}, {24,18}, {25,18}, {26,18}, {27,18}, {28,18}, 
    {29,18}, {30,18}, {31,18}, {32,18}, {4,18}, {5,18}, {33,19}, {17,19}, 
    {22,19}, {23,19}, {24,19}, {25,19}, {26,19}, {27,19}, {28,19}, {29,19}, 
    {30,19}, {31,19}, {32,19}, {4,19}, {5,19}, {33,20}, {18,20}, {22,20}, 
    {23,20}, {24,20}, {25,20}, {26,20}, {27,20}, {28,20}, {29,20}, {30,20}, 
    {31,20}, {32,20}, {3,20}, {33,21}, {18,21}, {22,21}, {23,21}, {24,21}, 
    {25,21}, {26,21}, {27,21}, {28,21}, {29,21}, {30,21}, {31,21}, {32,21}, 
    {3,21}, {33,22}, {19,22}, {22,22}, {23,22}, {24,22}, {25,22}, {26,22}, 
    {27,22}, {28,22}, {29,22}, {30,22}, {31,22}, {32,22}, {2,22}, {3,22}, 
    {33,23}, {20,23}, {22,23}, {23,23}, {24,23}, {25,23}, {26,23}, {27,23}, 
    {28,23}, {29,23}, {30,23}, {31,23}, {32,23}, {5,23}, {33,24}, {21,24}, 
    {22,24}, {23,24}, {24,24}, {25,24}, {26,24}, {27,24}, {28,24}, {29,24}, 
    {30,24}, {31,24}, {32,24}, {0,24}, {2,24}
};
  for(int n = 0; n < 237;n++)
    AddAffectArc(InitialSVs[AffectArcs[n][0]], InitialActions[AffectArcs[n][1]]);
  int EnableArcs[38][2] = {
    {33,0}, {33,1}, {33,2}, {33,3}, {33,4}, {33,5}, {33,6}, {33,7}, 
    {33,8}, {33,9}, {33,10}, {11,11}, {10,11}, {11,12}, {10,12}, {12,13}, 
    {13,14}, {10,14}, {14,15}, {0,15}, {15,16}, {1,16}, {16,17}, {4,17}, 
    {17,18}, {4,18}, {17,19}, {4,19}, {18,20}, {3,20}, {18,21}, {3,21}, 
    {19,22}, {2,22}, {20,23}, {5,23}, {21,24}, {0,24}
};
  for(int n = 0; n < 38;n++)
    AddEnableArc(InitialSVs[EnableArcs[n][0]], InitialActions[EnableArcs[n][1]]);
  for(int x = 0; x < 25; x++) {
    InitialActions[x]->LinkVariables();
  }

  customInitialization();

  recalculateAdversaryDecisionWeights();

}

FormulaADVISE::~FormulaADVISE() {
}

void FormulaADVISE::assignSVsToAttackSteps() {
  ForgevalidCANBUSpackagesFailure.Machineishijacked = Machineishijacked;
  ForgevalidCANBUSpackagesFailure.CANpacketforging = CANpacketforging;
  ForgevalidCANBUSpackagesFailure.AccessToCANBus = AccessToCANBus;
  ForgevalidCANBUSpackagesFailure.ForgevalidCANBUSpackagesChosen = ForgevalidCANBUSpackagesChosen;
  ForgevalidCANBUSpackagesFailure.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  ForgevalidCANBUSpackagesFailure.DoNothingWeight = DoNothingWeight;
  ForgevalidCANBUSpackagesFailure.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  ForgevalidCANBUSpackagesFailure.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  ForgevalidCANBUSpackagesFailure.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  ForgevalidCANBUSpackagesFailure.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  ForgevalidCANBUSpackagesFailure.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  ForgevalidCANBUSpackagesFailure.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  ForgevalidCANBUSpackagesFailure.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  ForgevalidCANBUSpackagesFailure.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  ForgevalidCANBUSpackagesFailure.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  ForgevalidCANBUSpackagesFailure.MakeDecision = MakeDecision;
  ForgevalidCANBUSpackagesFailure.setSVs(ForgevalidCANBUSpackagesChosen, ForgevalidCANBUSpackagesWeight);
  ForgevalidCANBUSpackagesSuccess.Machineishijacked = Machineishijacked;
  ForgevalidCANBUSpackagesSuccess.CANpacketforging = CANpacketforging;
  ForgevalidCANBUSpackagesSuccess.AccessToCANBus = AccessToCANBus;
  ForgevalidCANBUSpackagesSuccess.ForgevalidCANBUSpackagesChosen = ForgevalidCANBUSpackagesChosen;
  ForgevalidCANBUSpackagesSuccess.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  ForgevalidCANBUSpackagesSuccess.DoNothingWeight = DoNothingWeight;
  ForgevalidCANBUSpackagesSuccess.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  ForgevalidCANBUSpackagesSuccess.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  ForgevalidCANBUSpackagesSuccess.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  ForgevalidCANBUSpackagesSuccess.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  ForgevalidCANBUSpackagesSuccess.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  ForgevalidCANBUSpackagesSuccess.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  ForgevalidCANBUSpackagesSuccess.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  ForgevalidCANBUSpackagesSuccess.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  ForgevalidCANBUSpackagesSuccess.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  ForgevalidCANBUSpackagesSuccess.MakeDecision = MakeDecision;
  ForgevalidCANBUSpackagesSuccess.setSVs(ForgevalidCANBUSpackagesChosen, ForgevalidCANBUSpackagesWeight);
  DoNothingOutcome1.DoNothingChosen = DoNothingChosen;
  DoNothingOutcome1.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  DoNothingOutcome1.DoNothingWeight = DoNothingWeight;
  DoNothingOutcome1.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  DoNothingOutcome1.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  DoNothingOutcome1.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  DoNothingOutcome1.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  DoNothingOutcome1.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  DoNothingOutcome1.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  DoNothingOutcome1.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  DoNothingOutcome1.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  DoNothingOutcome1.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  DoNothingOutcome1.MakeDecision = MakeDecision;
  DoNothingOutcome1.setSVs(DoNothingChosen, DoNothingWeight);
  DDOStheCANBUSOutcome1.Machineishijacked = Machineishijacked;
  DDOStheCANBUSOutcome1.AccessToCANBus = AccessToCANBus;
  DDOStheCANBUSOutcome1.DDOStheCANBUSChosen = DDOStheCANBUSChosen;
  DDOStheCANBUSOutcome1.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  DDOStheCANBUSOutcome1.DoNothingWeight = DoNothingWeight;
  DDOStheCANBUSOutcome1.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  DDOStheCANBUSOutcome1.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  DDOStheCANBUSOutcome1.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  DDOStheCANBUSOutcome1.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  DDOStheCANBUSOutcome1.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  DDOStheCANBUSOutcome1.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  DDOStheCANBUSOutcome1.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  DDOStheCANBUSOutcome1.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  DDOStheCANBUSOutcome1.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  DDOStheCANBUSOutcome1.MakeDecision = MakeDecision;
  DDOStheCANBUSOutcome1.setSVs(DDOStheCANBUSChosen, DDOStheCANBUSWeight);
  ExecutearbitrarycodeonthetelematicsunitSuccess.AccessToCANBus = AccessToCANBus;
  ExecutearbitrarycodeonthetelematicsunitSuccess.Telematicunitaccess = Telematicunitaccess;
  ExecutearbitrarycodeonthetelematicsunitSuccess.ExecutearbitrarycodeonthetelematicsunitChosen = ExecutearbitrarycodeonthetelematicsunitChosen;
  ExecutearbitrarycodeonthetelematicsunitSuccess.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.DoNothingWeight = DoNothingWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  ExecutearbitrarycodeonthetelematicsunitSuccess.MakeDecision = MakeDecision;
  ExecutearbitrarycodeonthetelematicsunitSuccess.setSVs(ExecutearbitrarycodeonthetelematicsunitChosen, ExecutearbitrarycodeonthetelematicsunitWeight);
  ExploituncheckedstrcpySuccess.Telematicunitaccess = Telematicunitaccess;
  ExploituncheckedstrcpySuccess.Validlinkwithcarbluetooth = Validlinkwithcarbluetooth;
  ExploituncheckedstrcpySuccess.Systemhacking = Systemhacking;
  ExploituncheckedstrcpySuccess.ExploituncheckedstrcpyChosen = ExploituncheckedstrcpyChosen;
  ExploituncheckedstrcpySuccess.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  ExploituncheckedstrcpySuccess.DoNothingWeight = DoNothingWeight;
  ExploituncheckedstrcpySuccess.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  ExploituncheckedstrcpySuccess.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  ExploituncheckedstrcpySuccess.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  ExploituncheckedstrcpySuccess.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  ExploituncheckedstrcpySuccess.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  ExploituncheckedstrcpySuccess.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  ExploituncheckedstrcpySuccess.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  ExploituncheckedstrcpySuccess.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  ExploituncheckedstrcpySuccess.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  ExploituncheckedstrcpySuccess.MakeDecision = MakeDecision;
  ExploituncheckedstrcpySuccess.setSVs(ExploituncheckedstrcpyChosen, ExploituncheckedstrcpyWeight);
  InsertTrojaninuserphoneSuccess.Validlinkwithcarbluetooth = Validlinkwithcarbluetooth;
  InsertTrojaninuserphoneSuccess.Socialengineering = Socialengineering;
  InsertTrojaninuserphoneSuccess.InsertTrojaninuserphoneChosen = InsertTrojaninuserphoneChosen;
  InsertTrojaninuserphoneSuccess.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  InsertTrojaninuserphoneSuccess.DoNothingWeight = DoNothingWeight;
  InsertTrojaninuserphoneSuccess.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  InsertTrojaninuserphoneSuccess.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  InsertTrojaninuserphoneSuccess.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  InsertTrojaninuserphoneSuccess.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  InsertTrojaninuserphoneSuccess.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  InsertTrojaninuserphoneSuccess.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  InsertTrojaninuserphoneSuccess.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  InsertTrojaninuserphoneSuccess.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  InsertTrojaninuserphoneSuccess.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  InsertTrojaninuserphoneSuccess.MakeDecision = MakeDecision;
  InsertTrojaninuserphoneSuccess.setSVs(InsertTrojaninuserphoneChosen, InsertTrojaninuserphoneWeight);
  BruteforceBluetoothPINFailure.Validlinkwithcarbluetooth = Validlinkwithcarbluetooth;
  BruteforceBluetoothPINFailure.MACaddressoftheCar = MACaddressoftheCar;
  BruteforceBluetoothPINFailure.BruteforceBluetoothPINChosen = BruteforceBluetoothPINChosen;
  BruteforceBluetoothPINFailure.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  BruteforceBluetoothPINFailure.DoNothingWeight = DoNothingWeight;
  BruteforceBluetoothPINFailure.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  BruteforceBluetoothPINFailure.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  BruteforceBluetoothPINFailure.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  BruteforceBluetoothPINFailure.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  BruteforceBluetoothPINFailure.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  BruteforceBluetoothPINFailure.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  BruteforceBluetoothPINFailure.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  BruteforceBluetoothPINFailure.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  BruteforceBluetoothPINFailure.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  BruteforceBluetoothPINFailure.MakeDecision = MakeDecision;
  BruteforceBluetoothPINFailure.setSVs(BruteforceBluetoothPINChosen, BruteforceBluetoothPINWeight);
  BruteforceBluetoothPINSuccess.Validlinkwithcarbluetooth = Validlinkwithcarbluetooth;
  BruteforceBluetoothPINSuccess.MACaddressoftheCar = MACaddressoftheCar;
  BruteforceBluetoothPINSuccess.BruteforceBluetoothPINChosen = BruteforceBluetoothPINChosen;
  BruteforceBluetoothPINSuccess.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  BruteforceBluetoothPINSuccess.DoNothingWeight = DoNothingWeight;
  BruteforceBluetoothPINSuccess.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  BruteforceBluetoothPINSuccess.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  BruteforceBluetoothPINSuccess.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  BruteforceBluetoothPINSuccess.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  BruteforceBluetoothPINSuccess.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  BruteforceBluetoothPINSuccess.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  BruteforceBluetoothPINSuccess.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  BruteforceBluetoothPINSuccess.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  BruteforceBluetoothPINSuccess.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  BruteforceBluetoothPINSuccess.MakeDecision = MakeDecision;
  BruteforceBluetoothPINSuccess.setSVs(BruteforceBluetoothPINChosen, BruteforceBluetoothPINWeight);
  AccessdealershipWIFIFailure.Networkaccess = Networkaccess;
  AccessdealershipWIFIFailure.Networkhacking = Networkhacking;
  AccessdealershipWIFIFailure.Socialengineering = Socialengineering;
  AccessdealershipWIFIFailure.AccessdealershipWIFIChosen = AccessdealershipWIFIChosen;
  AccessdealershipWIFIFailure.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  AccessdealershipWIFIFailure.DoNothingWeight = DoNothingWeight;
  AccessdealershipWIFIFailure.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  AccessdealershipWIFIFailure.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  AccessdealershipWIFIFailure.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  AccessdealershipWIFIFailure.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  AccessdealershipWIFIFailure.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  AccessdealershipWIFIFailure.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  AccessdealershipWIFIFailure.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  AccessdealershipWIFIFailure.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  AccessdealershipWIFIFailure.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  AccessdealershipWIFIFailure.MakeDecision = MakeDecision;
  AccessdealershipWIFIFailure.setSVs(AccessdealershipWIFIChosen, AccessdealershipWIFIWeight);
  AccessdealershipWIFISuccess.Networkaccess = Networkaccess;
  AccessdealershipWIFISuccess.Networkhacking = Networkhacking;
  AccessdealershipWIFISuccess.Socialengineering = Socialengineering;
  AccessdealershipWIFISuccess.AccessdealershipWIFIChosen = AccessdealershipWIFIChosen;
  AccessdealershipWIFISuccess.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  AccessdealershipWIFISuccess.DoNothingWeight = DoNothingWeight;
  AccessdealershipWIFISuccess.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  AccessdealershipWIFISuccess.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  AccessdealershipWIFISuccess.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  AccessdealershipWIFISuccess.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  AccessdealershipWIFISuccess.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  AccessdealershipWIFISuccess.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  AccessdealershipWIFISuccess.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  AccessdealershipWIFISuccess.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  AccessdealershipWIFISuccess.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  AccessdealershipWIFISuccess.MakeDecision = MakeDecision;
  AccessdealershipWIFISuccess.setSVs(AccessdealershipWIFIChosen, AccessdealershipWIFIWeight);
  ShellinjectiononPassThruSuccess.AccesstoOBDIIport = AccesstoOBDIIport;
  ShellinjectiononPassThruSuccess.Networkaccess = Networkaccess;
  ShellinjectiononPassThruSuccess.Systemhacking = Systemhacking;
  ShellinjectiononPassThruSuccess.ShellinjectiononPassThruChosen = ShellinjectiononPassThruChosen;
  ShellinjectiononPassThruSuccess.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  ShellinjectiononPassThruSuccess.DoNothingWeight = DoNothingWeight;
  ShellinjectiononPassThruSuccess.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  ShellinjectiononPassThruSuccess.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  ShellinjectiononPassThruSuccess.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  ShellinjectiononPassThruSuccess.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  ShellinjectiononPassThruSuccess.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  ShellinjectiononPassThruSuccess.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  ShellinjectiononPassThruSuccess.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  ShellinjectiononPassThruSuccess.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  ShellinjectiononPassThruSuccess.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  ShellinjectiononPassThruSuccess.MakeDecision = MakeDecision;
  ShellinjectiononPassThruSuccess.setSVs(ShellinjectiononPassThruChosen, ShellinjectiononPassThruWeight);
  SniffcarBluetoothMACaddressSuccess.MACaddressoftheCar = MACaddressoftheCar;
  SniffcarBluetoothMACaddressSuccess.Networkhacking = Networkhacking;
  SniffcarBluetoothMACaddressSuccess.SniffcarBluetoothMACaddressChosen = SniffcarBluetoothMACaddressChosen;
  SniffcarBluetoothMACaddressSuccess.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  SniffcarBluetoothMACaddressSuccess.DoNothingWeight = DoNothingWeight;
  SniffcarBluetoothMACaddressSuccess.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  SniffcarBluetoothMACaddressSuccess.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  SniffcarBluetoothMACaddressSuccess.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  SniffcarBluetoothMACaddressSuccess.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  SniffcarBluetoothMACaddressSuccess.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  SniffcarBluetoothMACaddressSuccess.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  SniffcarBluetoothMACaddressSuccess.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  SniffcarBluetoothMACaddressSuccess.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  SniffcarBluetoothMACaddressSuccess.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  SniffcarBluetoothMACaddressSuccess.MakeDecision = MakeDecision;
  SniffcarBluetoothMACaddressSuccess.setSVs(SniffcarBluetoothMACaddressChosen, SniffcarBluetoothMACaddressWeight);
  ProgramthecarECUsOutcome1.AccessToCANBus = AccessToCANBus;
  ProgramthecarECUsOutcome1.AccesstoOBDIIport = AccesstoOBDIIport;
  ProgramthecarECUsOutcome1.ProgramthecarECUsChosen = ProgramthecarECUsChosen;
  ProgramthecarECUsOutcome1.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  ProgramthecarECUsOutcome1.DoNothingWeight = DoNothingWeight;
  ProgramthecarECUsOutcome1.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  ProgramthecarECUsOutcome1.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  ProgramthecarECUsOutcome1.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  ProgramthecarECUsOutcome1.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  ProgramthecarECUsOutcome1.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  ProgramthecarECUsOutcome1.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  ProgramthecarECUsOutcome1.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  ProgramthecarECUsOutcome1.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  ProgramthecarECUsOutcome1.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
  ProgramthecarECUsOutcome1.MakeDecision = MakeDecision;
  ProgramthecarECUsOutcome1.setSVs(ProgramthecarECUsChosen, ProgramthecarECUsWeight);

  ForgevalidCANBUSpackagesAD.MakeDecision = MakeDecision;
  ForgevalidCANBUSpackagesAD.ForgevalidCANBUSpackagesChosen = ForgevalidCANBUSpackagesChosen;
  ForgevalidCANBUSpackagesAD.ForgevalidCANBUSpackagesWeight = ForgevalidCANBUSpackagesWeight;
  DoNothingAD.MakeDecision = MakeDecision;
  DoNothingAD.DoNothingChosen = DoNothingChosen;
  DoNothingAD.DoNothingWeight = DoNothingWeight;
  DDOStheCANBUSAD.MakeDecision = MakeDecision;
  DDOStheCANBUSAD.DDOStheCANBUSChosen = DDOStheCANBUSChosen;
  DDOStheCANBUSAD.DDOStheCANBUSWeight = DDOStheCANBUSWeight;
  ExecutearbitrarycodeonthetelematicsunitAD.MakeDecision = MakeDecision;
  ExecutearbitrarycodeonthetelematicsunitAD.ExecutearbitrarycodeonthetelematicsunitChosen = ExecutearbitrarycodeonthetelematicsunitChosen;
  ExecutearbitrarycodeonthetelematicsunitAD.ExecutearbitrarycodeonthetelematicsunitWeight = ExecutearbitrarycodeonthetelematicsunitWeight;
  ExploituncheckedstrcpyAD.MakeDecision = MakeDecision;
  ExploituncheckedstrcpyAD.ExploituncheckedstrcpyChosen = ExploituncheckedstrcpyChosen;
  ExploituncheckedstrcpyAD.ExploituncheckedstrcpyWeight = ExploituncheckedstrcpyWeight;
  InsertTrojaninuserphoneAD.MakeDecision = MakeDecision;
  InsertTrojaninuserphoneAD.InsertTrojaninuserphoneChosen = InsertTrojaninuserphoneChosen;
  InsertTrojaninuserphoneAD.InsertTrojaninuserphoneWeight = InsertTrojaninuserphoneWeight;
  BruteforceBluetoothPINAD.MakeDecision = MakeDecision;
  BruteforceBluetoothPINAD.BruteforceBluetoothPINChosen = BruteforceBluetoothPINChosen;
  BruteforceBluetoothPINAD.BruteforceBluetoothPINWeight = BruteforceBluetoothPINWeight;
  AccessdealershipWIFIAD.MakeDecision = MakeDecision;
  AccessdealershipWIFIAD.AccessdealershipWIFIChosen = AccessdealershipWIFIChosen;
  AccessdealershipWIFIAD.AccessdealershipWIFIWeight = AccessdealershipWIFIWeight;
  ShellinjectiononPassThruAD.MakeDecision = MakeDecision;
  ShellinjectiononPassThruAD.ShellinjectiononPassThruChosen = ShellinjectiononPassThruChosen;
  ShellinjectiononPassThruAD.ShellinjectiononPassThruWeight = ShellinjectiononPassThruWeight;
  SniffcarBluetoothMACaddressAD.MakeDecision = MakeDecision;
  SniffcarBluetoothMACaddressAD.SniffcarBluetoothMACaddressChosen = SniffcarBluetoothMACaddressChosen;
  SniffcarBluetoothMACaddressAD.SniffcarBluetoothMACaddressWeight = SniffcarBluetoothMACaddressWeight;
  ProgramthecarECUsAD.MakeDecision = MakeDecision;
  ProgramthecarECUsAD.ProgramthecarECUsChosen = ProgramthecarECUsChosen;
  ProgramthecarECUsAD.ProgramthecarECUsWeight = ProgramthecarECUsWeight;
}

double FormulaADVISE::convertCostToUtility(double cost) {
  const double esquared = 7.389056099; // e^(2)
  if(cost < 0)
    return 1.0;
  else if(cost > 100)
    return 0.0;
  else {
    return (esquared - exp(cost/50))/(-1 + esquared);
  }
}

double FormulaADVISE::convertPayoffToUtility(double payoff) {
  const double etoten = 28.031624895; // e^(10/3)
  if(payoff < 0)
    return 0;
  else if(payoff > 1000)
    return 1;
  else {
    return (etoten - (etoten/exp(payoff/300)))/(-1 + etoten);
  }
}

double FormulaADVISE::convertDetectionToUtility(double detection) {
  const double esquared = 7.389056099; // e^(2)
  if(detection < 0)
    return 1;
  else if(detection > 1)
    return 0;
  else {
    return (1-(esquared/exp(2*detection)))/(1-esquared);
  }
}

void FormulaADVISE::customInitialization() {

}

/*****************************************************************/
/*                   Attack Step Definitions                     */
/*****************************************************************/

/*====================== ForgevalidCANBUSpackagesFailureStep ========================*/

FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::ForgevalidCANBUSpackagesFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("ForgevalidCANBUSpackagesFailureStep", 0, Deterministic, RaceEnabled, 16, 1, false);}

FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::~ForgevalidCANBUSpackagesFailureStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::LinkVariables() {
  Machineishijacked->Register(&Machineishijacked_Mobius_Mark);
  CANpacketforging->Register(&CANpacketforging_Mobius_Mark);
  AccessToCANBus->Register(&AccessToCANBus_Mobius_Mark);
  ForgevalidCANBUSpackagesChosen->Register(&ForgevalidCANBUSpackagesChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(ForgevalidCANBUSpackagesChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::timeDistributionParameter0() {
return 2;
}

double FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::Weight() {
if (CANpacketforging->Mark() > 80) return 0.1; else 0.3;
}

bool FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::Rank() {
  return 1;
}

bool FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::preconditionsMet() {
return AccessToCANBus->Mark() && !Machineishijacked->Mark() && CANpacketforging->Mark() > 50;
  return true;
}

void FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::executeEffects() {
Machineishijacked->Mark() = true;
}

double FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::getCost() {
return 3;
}

double FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::getOutcomeProbability() {
if (CANpacketforging->Mark() > 80) return 0.1; else 0.3;
}

double FormulaADVISE::ForgevalidCANBUSpackagesFailureStep::getDetection() {
if (CANpacketforging->Mark() > 80) return 0; else 0.2;
}

/*====================== ForgevalidCANBUSpackagesSuccessStep ========================*/

FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::ForgevalidCANBUSpackagesSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("ForgevalidCANBUSpackagesSuccessStep", 0, Deterministic, RaceEnabled, 16, 1, false);}

FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::~ForgevalidCANBUSpackagesSuccessStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::LinkVariables() {
  Machineishijacked->Register(&Machineishijacked_Mobius_Mark);
  CANpacketforging->Register(&CANpacketforging_Mobius_Mark);
  AccessToCANBus->Register(&AccessToCANBus_Mobius_Mark);
  ForgevalidCANBUSpackagesChosen->Register(&ForgevalidCANBUSpackagesChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(ForgevalidCANBUSpackagesChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::timeDistributionParameter0() {
return 2;
}

double FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::Weight() {
if (CANpacketforging->Mark() > 80) return 0.9; else 0.7;
}

bool FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::Rank() {
  return 1;
}

bool FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::preconditionsMet() {
return AccessToCANBus->Mark() && !Machineishijacked->Mark() && CANpacketforging->Mark() > 50;
  return true;
}

void FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::executeEffects() {
Machineishijacked->Mark() = true;
}

double FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::getCost() {
return 3;
}

double FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::getOutcomeProbability() {
if (CANpacketforging->Mark() > 80) return 0.9; else 0.7;
}

double FormulaADVISE::ForgevalidCANBUSpackagesSuccessStep::getDetection() {
if (CANpacketforging->Mark() > 80) return 0; else 0.2;
}

/*====================== DoNothingOutcome1Step ========================*/

FormulaADVISE::DoNothingOutcome1Step::DoNothingOutcome1Step() {
  TheDistributionParameters = new double[1];
  commonInit("DoNothingOutcome1Step", 1, Deterministic, RaceEnabled, 13, 0, false);}

FormulaADVISE::DoNothingOutcome1Step::~DoNothingOutcome1Step() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::DoNothingOutcome1Step::LinkVariables() {
  DoNothingChosen->Register(&DoNothingChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::DoNothingOutcome1Step::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(DoNothingChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::DoNothingOutcome1Step::timeDistributionParameter0() {
return 1;
}

double FormulaADVISE::DoNothingOutcome1Step::Weight() {
  return 1;
}

bool FormulaADVISE::DoNothingOutcome1Step::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::DoNothingOutcome1Step::ReactivationFunction() {
  return false;
}

double FormulaADVISE::DoNothingOutcome1Step::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::DoNothingOutcome1Step::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::DoNothingOutcome1Step::Rank() {
  return 1;
}

bool FormulaADVISE::DoNothingOutcome1Step::preconditionsMet() {

  return true;
}

void FormulaADVISE::DoNothingOutcome1Step::executeEffects() {

}

double FormulaADVISE::DoNothingOutcome1Step::getCost() {
return 0;
}

double FormulaADVISE::DoNothingOutcome1Step::getOutcomeProbability() {
return 1;
}

double FormulaADVISE::DoNothingOutcome1Step::getDetection() {
return 0;
}

/*====================== DDOStheCANBUSOutcome1Step ========================*/

FormulaADVISE::DDOStheCANBUSOutcome1Step::DDOStheCANBUSOutcome1Step() {
  TheDistributionParameters = new double[1];
  commonInit("DDOStheCANBUSOutcome1Step", 2, Deterministic, RaceEnabled, 15, 1, false);}

FormulaADVISE::DDOStheCANBUSOutcome1Step::~DDOStheCANBUSOutcome1Step() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::DDOStheCANBUSOutcome1Step::LinkVariables() {
  Machineishijacked->Register(&Machineishijacked_Mobius_Mark);
  AccessToCANBus->Register(&AccessToCANBus_Mobius_Mark);
  DDOStheCANBUSChosen->Register(&DDOStheCANBUSChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::DDOStheCANBUSOutcome1Step::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(DDOStheCANBUSChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::DDOStheCANBUSOutcome1Step::timeDistributionParameter0() {
return 1;
}

double FormulaADVISE::DDOStheCANBUSOutcome1Step::Weight() {
  return 1;
}

bool FormulaADVISE::DDOStheCANBUSOutcome1Step::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::DDOStheCANBUSOutcome1Step::ReactivationFunction() {
  return false;
}

double FormulaADVISE::DDOStheCANBUSOutcome1Step::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::DDOStheCANBUSOutcome1Step::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::DDOStheCANBUSOutcome1Step::Rank() {
  return 1;
}

bool FormulaADVISE::DDOStheCANBUSOutcome1Step::preconditionsMet() {
return AccessToCANBus->Mark() && !Machineishijacked->Mark();
  return true;
}

void FormulaADVISE::DDOStheCANBUSOutcome1Step::executeEffects() {
Machineishijacked->Mark() = true;
}

double FormulaADVISE::DDOStheCANBUSOutcome1Step::getCost() {
return 1;
}

double FormulaADVISE::DDOStheCANBUSOutcome1Step::getOutcomeProbability() {
return 1;
}

double FormulaADVISE::DDOStheCANBUSOutcome1Step::getDetection() {
return 0.9;
}

/*====================== ExecutearbitrarycodeonthetelematicsunitSuccessStep ========================*/

FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::ExecutearbitrarycodeonthetelematicsunitSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("ExecutearbitrarycodeonthetelematicsunitSuccessStep", 3, Deterministic, RaceEnabled, 15, 1, false);}

FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::~ExecutearbitrarycodeonthetelematicsunitSuccessStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::LinkVariables() {
  AccessToCANBus->Register(&AccessToCANBus_Mobius_Mark);
  Telematicunitaccess->Register(&Telematicunitaccess_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitChosen->Register(&ExecutearbitrarycodeonthetelematicsunitChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(ExecutearbitrarycodeonthetelematicsunitChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::timeDistributionParameter0() {
return 1;
}

double FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::Weight() {
  return 1;
}

bool FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::Rank() {
  return 1;
}

bool FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::preconditionsMet() {
return Telematicunitaccess->Mark() && !AccessToCANBus->Mark();
  return true;
}

void FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::executeEffects() {
AccessToCANBus->Mark() = true;
}

double FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::getCost() {
return 5;
}

double FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::getOutcomeProbability() {
return 1;
}

double FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitSuccessStep::getDetection() {
return 0;
}

/*====================== ExploituncheckedstrcpySuccessStep ========================*/

FormulaADVISE::ExploituncheckedstrcpySuccessStep::ExploituncheckedstrcpySuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("ExploituncheckedstrcpySuccessStep", 4, Deterministic, RaceEnabled, 16, 1, false);}

FormulaADVISE::ExploituncheckedstrcpySuccessStep::~ExploituncheckedstrcpySuccessStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::ExploituncheckedstrcpySuccessStep::LinkVariables() {
  Telematicunitaccess->Register(&Telematicunitaccess_Mobius_Mark);
  Validlinkwithcarbluetooth->Register(&Validlinkwithcarbluetooth_Mobius_Mark);
  Systemhacking->Register(&Systemhacking_Mobius_Mark);
  ExploituncheckedstrcpyChosen->Register(&ExploituncheckedstrcpyChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::ExploituncheckedstrcpySuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(ExploituncheckedstrcpyChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ExploituncheckedstrcpySuccessStep::timeDistributionParameter0() {
return 5;
}

double FormulaADVISE::ExploituncheckedstrcpySuccessStep::Weight() {
  return 1;
}

bool FormulaADVISE::ExploituncheckedstrcpySuccessStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ExploituncheckedstrcpySuccessStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ExploituncheckedstrcpySuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::ExploituncheckedstrcpySuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::ExploituncheckedstrcpySuccessStep::Rank() {
  return 1;
}

bool FormulaADVISE::ExploituncheckedstrcpySuccessStep::preconditionsMet() {
return !Telematicunitaccess->Mark() && Validlinkwithcarbluetooth->Mark() && Systemhacking->Mark() > 50;
  return true;
}

void FormulaADVISE::ExploituncheckedstrcpySuccessStep::executeEffects() {
Telematicunitaccess->Mark() = true;
}

double FormulaADVISE::ExploituncheckedstrcpySuccessStep::getCost() {
return 10;
}

double FormulaADVISE::ExploituncheckedstrcpySuccessStep::getOutcomeProbability() {
return 1;
}

double FormulaADVISE::ExploituncheckedstrcpySuccessStep::getDetection() {
return 0;
}

/*====================== InsertTrojaninuserphoneSuccessStep ========================*/

FormulaADVISE::InsertTrojaninuserphoneSuccessStep::InsertTrojaninuserphoneSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("InsertTrojaninuserphoneSuccessStep", 5, Deterministic, RaceEnabled, 15, 1, false);}

FormulaADVISE::InsertTrojaninuserphoneSuccessStep::~InsertTrojaninuserphoneSuccessStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::InsertTrojaninuserphoneSuccessStep::LinkVariables() {
  Validlinkwithcarbluetooth->Register(&Validlinkwithcarbluetooth_Mobius_Mark);
  Socialengineering->Register(&Socialengineering_Mobius_Mark);
  InsertTrojaninuserphoneChosen->Register(&InsertTrojaninuserphoneChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::InsertTrojaninuserphoneSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(InsertTrojaninuserphoneChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::InsertTrojaninuserphoneSuccessStep::timeDistributionParameter0() {
return 1;
}

double FormulaADVISE::InsertTrojaninuserphoneSuccessStep::Weight() {
  return 1;
}

bool FormulaADVISE::InsertTrojaninuserphoneSuccessStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::InsertTrojaninuserphoneSuccessStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::InsertTrojaninuserphoneSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::InsertTrojaninuserphoneSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::InsertTrojaninuserphoneSuccessStep::Rank() {
  return 1;
}

bool FormulaADVISE::InsertTrojaninuserphoneSuccessStep::preconditionsMet() {
return !Validlinkwithcarbluetooth->Mark() && Socialengineering->Mark() > 30;
  return true;
}

void FormulaADVISE::InsertTrojaninuserphoneSuccessStep::executeEffects() {
Validlinkwithcarbluetooth->Mark() = true;
}

double FormulaADVISE::InsertTrojaninuserphoneSuccessStep::getCost() {
return 1;
}

double FormulaADVISE::InsertTrojaninuserphoneSuccessStep::getOutcomeProbability() {
if (Socialengineering->Mark() > 80) return 0.9; else 0.3;
}

double FormulaADVISE::InsertTrojaninuserphoneSuccessStep::getDetection() {
return 0.1;
}

/*====================== BruteforceBluetoothPINFailureStep ========================*/

FormulaADVISE::BruteforceBluetoothPINFailureStep::BruteforceBluetoothPINFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("BruteforceBluetoothPINFailureStep", 6, Deterministic, RaceEnabled, 15, 1, false);}

FormulaADVISE::BruteforceBluetoothPINFailureStep::~BruteforceBluetoothPINFailureStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::BruteforceBluetoothPINFailureStep::LinkVariables() {
  Validlinkwithcarbluetooth->Register(&Validlinkwithcarbluetooth_Mobius_Mark);
  MACaddressoftheCar->Register(&MACaddressoftheCar_Mobius_Mark);
  BruteforceBluetoothPINChosen->Register(&BruteforceBluetoothPINChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::BruteforceBluetoothPINFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(BruteforceBluetoothPINChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::BruteforceBluetoothPINFailureStep::timeDistributionParameter0() {
return 1;
}

double FormulaADVISE::BruteforceBluetoothPINFailureStep::Weight() {
return 0.95;
}

bool FormulaADVISE::BruteforceBluetoothPINFailureStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::BruteforceBluetoothPINFailureStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::BruteforceBluetoothPINFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::BruteforceBluetoothPINFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::BruteforceBluetoothPINFailureStep::Rank() {
  return 1;
}

bool FormulaADVISE::BruteforceBluetoothPINFailureStep::preconditionsMet() {
return !Validlinkwithcarbluetooth->Mark() && MACaddressoftheCar->Mark();
  return true;
}

void FormulaADVISE::BruteforceBluetoothPINFailureStep::executeEffects() {

}

double FormulaADVISE::BruteforceBluetoothPINFailureStep::getCost() {
return 1;
}

double FormulaADVISE::BruteforceBluetoothPINFailureStep::getOutcomeProbability() {
return 0.95;
}

double FormulaADVISE::BruteforceBluetoothPINFailureStep::getDetection() {
return 0;
}

/*====================== BruteforceBluetoothPINSuccessStep ========================*/

FormulaADVISE::BruteforceBluetoothPINSuccessStep::BruteforceBluetoothPINSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("BruteforceBluetoothPINSuccessStep", 6, Deterministic, RaceEnabled, 15, 1, false);}

FormulaADVISE::BruteforceBluetoothPINSuccessStep::~BruteforceBluetoothPINSuccessStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::BruteforceBluetoothPINSuccessStep::LinkVariables() {
  Validlinkwithcarbluetooth->Register(&Validlinkwithcarbluetooth_Mobius_Mark);
  MACaddressoftheCar->Register(&MACaddressoftheCar_Mobius_Mark);
  BruteforceBluetoothPINChosen->Register(&BruteforceBluetoothPINChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::BruteforceBluetoothPINSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(BruteforceBluetoothPINChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::BruteforceBluetoothPINSuccessStep::timeDistributionParameter0() {
return 1;
}

double FormulaADVISE::BruteforceBluetoothPINSuccessStep::Weight() {
return 0.05;
}

bool FormulaADVISE::BruteforceBluetoothPINSuccessStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::BruteforceBluetoothPINSuccessStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::BruteforceBluetoothPINSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::BruteforceBluetoothPINSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::BruteforceBluetoothPINSuccessStep::Rank() {
  return 1;
}

bool FormulaADVISE::BruteforceBluetoothPINSuccessStep::preconditionsMet() {
return !Validlinkwithcarbluetooth->Mark() && MACaddressoftheCar->Mark();
  return true;
}

void FormulaADVISE::BruteforceBluetoothPINSuccessStep::executeEffects() {
Validlinkwithcarbluetooth->Mark() = true;
}

double FormulaADVISE::BruteforceBluetoothPINSuccessStep::getCost() {
return 1;
}

double FormulaADVISE::BruteforceBluetoothPINSuccessStep::getOutcomeProbability() {
return 0.05;
}

double FormulaADVISE::BruteforceBluetoothPINSuccessStep::getDetection() {
return 0;
}

/*====================== AccessdealershipWIFIFailureStep ========================*/

FormulaADVISE::AccessdealershipWIFIFailureStep::AccessdealershipWIFIFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("AccessdealershipWIFIFailureStep", 7, Deterministic, RaceEnabled, 16, 1, false);}

FormulaADVISE::AccessdealershipWIFIFailureStep::~AccessdealershipWIFIFailureStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::AccessdealershipWIFIFailureStep::LinkVariables() {
  Networkaccess->Register(&Networkaccess_Mobius_Mark);
  Networkhacking->Register(&Networkhacking_Mobius_Mark);
  Socialengineering->Register(&Socialengineering_Mobius_Mark);
  AccessdealershipWIFIChosen->Register(&AccessdealershipWIFIChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::AccessdealershipWIFIFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(AccessdealershipWIFIChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::AccessdealershipWIFIFailureStep::timeDistributionParameter0() {
return 10;
}

double FormulaADVISE::AccessdealershipWIFIFailureStep::Weight() {
if (Networkhacking->Mark() > 90) return 0; else 0.1;
}

bool FormulaADVISE::AccessdealershipWIFIFailureStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::AccessdealershipWIFIFailureStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::AccessdealershipWIFIFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::AccessdealershipWIFIFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::AccessdealershipWIFIFailureStep::Rank() {
  return 1;
}

bool FormulaADVISE::AccessdealershipWIFIFailureStep::preconditionsMet() {
return !Networkaccess->Mark() && (Networkhacking->Mark() > 30 || Socialengineering->Mark() > 50);
  return true;
}

void FormulaADVISE::AccessdealershipWIFIFailureStep::executeEffects() {

}

double FormulaADVISE::AccessdealershipWIFIFailureStep::getCost() {
return 1;
}

double FormulaADVISE::AccessdealershipWIFIFailureStep::getOutcomeProbability() {
if (Networkhacking->Mark() > 90) return 0; else 0.1;
}

double FormulaADVISE::AccessdealershipWIFIFailureStep::getDetection() {
if (Networkhacking->Mark() > 60) return 0.1; else 0.5;
}

/*====================== AccessdealershipWIFISuccessStep ========================*/

FormulaADVISE::AccessdealershipWIFISuccessStep::AccessdealershipWIFISuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("AccessdealershipWIFISuccessStep", 7, Deterministic, RaceEnabled, 16, 1, false);}

FormulaADVISE::AccessdealershipWIFISuccessStep::~AccessdealershipWIFISuccessStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::AccessdealershipWIFISuccessStep::LinkVariables() {
  Networkaccess->Register(&Networkaccess_Mobius_Mark);
  Networkhacking->Register(&Networkhacking_Mobius_Mark);
  Socialengineering->Register(&Socialengineering_Mobius_Mark);
  AccessdealershipWIFIChosen->Register(&AccessdealershipWIFIChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::AccessdealershipWIFISuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(AccessdealershipWIFIChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::AccessdealershipWIFISuccessStep::timeDistributionParameter0() {
return 10;
}

double FormulaADVISE::AccessdealershipWIFISuccessStep::Weight() {
if (Networkhacking->Mark() > 90) return 1; else 0.9;
}

bool FormulaADVISE::AccessdealershipWIFISuccessStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::AccessdealershipWIFISuccessStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::AccessdealershipWIFISuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::AccessdealershipWIFISuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::AccessdealershipWIFISuccessStep::Rank() {
  return 1;
}

bool FormulaADVISE::AccessdealershipWIFISuccessStep::preconditionsMet() {
return !Networkaccess->Mark() && (Networkhacking->Mark() > 30 || Socialengineering->Mark() > 50);
  return true;
}

void FormulaADVISE::AccessdealershipWIFISuccessStep::executeEffects() {
Networkaccess->Mark() = true;
}

double FormulaADVISE::AccessdealershipWIFISuccessStep::getCost() {
return 1;
}

double FormulaADVISE::AccessdealershipWIFISuccessStep::getOutcomeProbability() {
if (Networkhacking->Mark() > 90) return 1; else 0.9;
}

double FormulaADVISE::AccessdealershipWIFISuccessStep::getDetection() {
if (Networkhacking->Mark() > 60) return 0.1; else 0.5;
}

/*====================== ShellinjectiononPassThruSuccessStep ========================*/

FormulaADVISE::ShellinjectiononPassThruSuccessStep::ShellinjectiononPassThruSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("ShellinjectiononPassThruSuccessStep", 8, Deterministic, RaceEnabled, 16, 1, false);}

FormulaADVISE::ShellinjectiononPassThruSuccessStep::~ShellinjectiononPassThruSuccessStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::ShellinjectiononPassThruSuccessStep::LinkVariables() {
  AccesstoOBDIIport->Register(&AccesstoOBDIIport_Mobius_Mark);
  Networkaccess->Register(&Networkaccess_Mobius_Mark);
  Systemhacking->Register(&Systemhacking_Mobius_Mark);
  ShellinjectiononPassThruChosen->Register(&ShellinjectiononPassThruChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::ShellinjectiononPassThruSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(ShellinjectiononPassThruChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ShellinjectiononPassThruSuccessStep::timeDistributionParameter0() {
return 1;
}

double FormulaADVISE::ShellinjectiononPassThruSuccessStep::Weight() {
  return 1;
}

bool FormulaADVISE::ShellinjectiononPassThruSuccessStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ShellinjectiononPassThruSuccessStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ShellinjectiononPassThruSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::ShellinjectiononPassThruSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::ShellinjectiononPassThruSuccessStep::Rank() {
  return 1;
}

bool FormulaADVISE::ShellinjectiononPassThruSuccessStep::preconditionsMet() {
return Networkaccess->Mark() && !AccesstoOBDIIport->Mark() && Systemhacking->Mark() > 30;
  return true;
}

void FormulaADVISE::ShellinjectiononPassThruSuccessStep::executeEffects() {
AccesstoOBDIIport->Mark() = true;
}

double FormulaADVISE::ShellinjectiononPassThruSuccessStep::getCost() {
return 10;
}

double FormulaADVISE::ShellinjectiononPassThruSuccessStep::getOutcomeProbability() {
return 1;
}

double FormulaADVISE::ShellinjectiononPassThruSuccessStep::getDetection() {
return 0;
}

/*====================== SniffcarBluetoothMACaddressSuccessStep ========================*/

FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::SniffcarBluetoothMACaddressSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("SniffcarBluetoothMACaddressSuccessStep", 9, Deterministic, RaceEnabled, 15, 1, false);}

FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::~SniffcarBluetoothMACaddressSuccessStep() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::LinkVariables() {
  MACaddressoftheCar->Register(&MACaddressoftheCar_Mobius_Mark);
  Networkhacking->Register(&Networkhacking_Mobius_Mark);
  SniffcarBluetoothMACaddressChosen->Register(&SniffcarBluetoothMACaddressChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(SniffcarBluetoothMACaddressChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::timeDistributionParameter0() {
return 10;
}

double FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::Weight() {
  return 1;
}

bool FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::ReactivationFunction() {
  return false;
}

double FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::Rank() {
  return 1;
}

bool FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::preconditionsMet() {
return !MACaddressoftheCar->Mark() && Networkhacking->Mark() > 10;
  return true;
}

void FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::executeEffects() {
MACaddressoftheCar->Mark() = true;
}

double FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::getCost() {
return 1;
}

double FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::getOutcomeProbability() {
return 1;
}

double FormulaADVISE::SniffcarBluetoothMACaddressSuccessStep::getDetection() {
return 0;
}

/*====================== ProgramthecarECUsOutcome1Step ========================*/

FormulaADVISE::ProgramthecarECUsOutcome1Step::ProgramthecarECUsOutcome1Step() {
  TheDistributionParameters = new double[1];
  commonInit("ProgramthecarECUsOutcome1Step", 10, Deterministic, RaceEnabled, 15, 1, false);}

FormulaADVISE::ProgramthecarECUsOutcome1Step::~ProgramthecarECUsOutcome1Step() {
  delete[] TheDistributionParameters;
}

void FormulaADVISE::ProgramthecarECUsOutcome1Step::LinkVariables() {
  AccessToCANBus->Register(&AccessToCANBus_Mobius_Mark);
  AccesstoOBDIIport->Register(&AccesstoOBDIIport_Mobius_Mark);
  ProgramthecarECUsChosen->Register(&ProgramthecarECUsChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool FormulaADVISE::ProgramthecarECUsOutcome1Step::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(ProgramthecarECUsChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ProgramthecarECUsOutcome1Step::timeDistributionParameter0() {
return 0;
}

double FormulaADVISE::ProgramthecarECUsOutcome1Step::Weight() {
  return 1;
}

bool FormulaADVISE::ProgramthecarECUsOutcome1Step::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ProgramthecarECUsOutcome1Step::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ProgramthecarECUsOutcome1Step::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *FormulaADVISE::ProgramthecarECUsOutcome1Step::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int FormulaADVISE::ProgramthecarECUsOutcome1Step::Rank() {
  return 1;
}

bool FormulaADVISE::ProgramthecarECUsOutcome1Step::preconditionsMet() {
return AccesstoOBDIIport->Mark() && !AccessToCANBus->Mark();
  return true;
}

void FormulaADVISE::ProgramthecarECUsOutcome1Step::executeEffects() {
AccessToCANBus->Mark() = true;
}

double FormulaADVISE::ProgramthecarECUsOutcome1Step::getCost() {
return 0;
}

double FormulaADVISE::ProgramthecarECUsOutcome1Step::getOutcomeProbability() {
return 1;
}

double FormulaADVISE::ProgramthecarECUsOutcome1Step::getDetection() {
return 0;
}

/*****************************************************************/
/*                   Adversary Decisions                         */
/*****************************************************************/

/*====================== ForgevalidCANBUSpackagesAdversaryDecision ========================*/

FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::ForgevalidCANBUSpackagesAdversaryDecision() {
  commonInit("ForgevalidCANBUSpackagesAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::~ForgevalidCANBUSpackagesAdversaryDecision() {
}

void FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  ForgevalidCANBUSpackagesChosen->Register(&ForgevalidCANBUSpackagesChosen_Mobius_Mark);
  ForgevalidCANBUSpackagesWeight->Register(&ForgevalidCANBUSpackagesWeight_Mobius_Mark);
}

bool FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::Weight() {
  return ForgevalidCANBUSpackagesWeight->Mark();
}

bool FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::ForgevalidCANBUSpackagesAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(ForgevalidCANBUSpackagesWeight_Mobius_Mark))--;
  (*(ForgevalidCANBUSpackagesChosen_Mobius_Mark))++;
  return this;
}

/*====================== DoNothingAdversaryDecision ========================*/

FormulaADVISE::DoNothingAdversaryDecision::DoNothingAdversaryDecision() {
  commonInit("DoNothingAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::DoNothingAdversaryDecision::~DoNothingAdversaryDecision() {
}

void FormulaADVISE::DoNothingAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  DoNothingChosen->Register(&DoNothingChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
}

bool FormulaADVISE::DoNothingAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::DoNothingAdversaryDecision::Weight() {
  return DoNothingWeight->Mark();
}

bool FormulaADVISE::DoNothingAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::DoNothingAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::DoNothingAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::DoNothingAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::DoNothingAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::DoNothingAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(DoNothingWeight_Mobius_Mark))--;
  (*(DoNothingChosen_Mobius_Mark))++;
  return this;
}

/*====================== DDOStheCANBUSAdversaryDecision ========================*/

FormulaADVISE::DDOStheCANBUSAdversaryDecision::DDOStheCANBUSAdversaryDecision() {
  commonInit("DDOStheCANBUSAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::DDOStheCANBUSAdversaryDecision::~DDOStheCANBUSAdversaryDecision() {
}

void FormulaADVISE::DDOStheCANBUSAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  DDOStheCANBUSChosen->Register(&DDOStheCANBUSChosen_Mobius_Mark);
  DDOStheCANBUSWeight->Register(&DDOStheCANBUSWeight_Mobius_Mark);
}

bool FormulaADVISE::DDOStheCANBUSAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::DDOStheCANBUSAdversaryDecision::Weight() {
  return DDOStheCANBUSWeight->Mark();
}

bool FormulaADVISE::DDOStheCANBUSAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::DDOStheCANBUSAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::DDOStheCANBUSAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::DDOStheCANBUSAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::DDOStheCANBUSAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::DDOStheCANBUSAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(DDOStheCANBUSWeight_Mobius_Mark))--;
  (*(DDOStheCANBUSChosen_Mobius_Mark))++;
  return this;
}

/*====================== ExecutearbitrarycodeonthetelematicsunitAdversaryDecision ========================*/

FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision() {
  commonInit("ExecutearbitrarycodeonthetelematicsunitAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::~ExecutearbitrarycodeonthetelematicsunitAdversaryDecision() {
}

void FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitChosen->Register(&ExecutearbitrarycodeonthetelematicsunitChosen_Mobius_Mark);
  ExecutearbitrarycodeonthetelematicsunitWeight->Register(&ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark);
}

bool FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::Weight() {
  return ExecutearbitrarycodeonthetelematicsunitWeight->Mark();
}

bool FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::ExecutearbitrarycodeonthetelematicsunitAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(ExecutearbitrarycodeonthetelematicsunitWeight_Mobius_Mark))--;
  (*(ExecutearbitrarycodeonthetelematicsunitChosen_Mobius_Mark))++;
  return this;
}

/*====================== ExploituncheckedstrcpyAdversaryDecision ========================*/

FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::ExploituncheckedstrcpyAdversaryDecision() {
  commonInit("ExploituncheckedstrcpyAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::~ExploituncheckedstrcpyAdversaryDecision() {
}

void FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  ExploituncheckedstrcpyChosen->Register(&ExploituncheckedstrcpyChosen_Mobius_Mark);
  ExploituncheckedstrcpyWeight->Register(&ExploituncheckedstrcpyWeight_Mobius_Mark);
}

bool FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::Weight() {
  return ExploituncheckedstrcpyWeight->Mark();
}

bool FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::ExploituncheckedstrcpyAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(ExploituncheckedstrcpyWeight_Mobius_Mark))--;
  (*(ExploituncheckedstrcpyChosen_Mobius_Mark))++;
  return this;
}

/*====================== InsertTrojaninuserphoneAdversaryDecision ========================*/

FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::InsertTrojaninuserphoneAdversaryDecision() {
  commonInit("InsertTrojaninuserphoneAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::~InsertTrojaninuserphoneAdversaryDecision() {
}

void FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  InsertTrojaninuserphoneChosen->Register(&InsertTrojaninuserphoneChosen_Mobius_Mark);
  InsertTrojaninuserphoneWeight->Register(&InsertTrojaninuserphoneWeight_Mobius_Mark);
}

bool FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::Weight() {
  return InsertTrojaninuserphoneWeight->Mark();
}

bool FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::InsertTrojaninuserphoneAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(InsertTrojaninuserphoneWeight_Mobius_Mark))--;
  (*(InsertTrojaninuserphoneChosen_Mobius_Mark))++;
  return this;
}

/*====================== BruteforceBluetoothPINAdversaryDecision ========================*/

FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::BruteforceBluetoothPINAdversaryDecision() {
  commonInit("BruteforceBluetoothPINAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::~BruteforceBluetoothPINAdversaryDecision() {
}

void FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  BruteforceBluetoothPINChosen->Register(&BruteforceBluetoothPINChosen_Mobius_Mark);
  BruteforceBluetoothPINWeight->Register(&BruteforceBluetoothPINWeight_Mobius_Mark);
}

bool FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::Weight() {
  return BruteforceBluetoothPINWeight->Mark();
}

bool FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::BruteforceBluetoothPINAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(BruteforceBluetoothPINWeight_Mobius_Mark))--;
  (*(BruteforceBluetoothPINChosen_Mobius_Mark))++;
  return this;
}

/*====================== AccessdealershipWIFIAdversaryDecision ========================*/

FormulaADVISE::AccessdealershipWIFIAdversaryDecision::AccessdealershipWIFIAdversaryDecision() {
  commonInit("AccessdealershipWIFIAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::AccessdealershipWIFIAdversaryDecision::~AccessdealershipWIFIAdversaryDecision() {
}

void FormulaADVISE::AccessdealershipWIFIAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  AccessdealershipWIFIChosen->Register(&AccessdealershipWIFIChosen_Mobius_Mark);
  AccessdealershipWIFIWeight->Register(&AccessdealershipWIFIWeight_Mobius_Mark);
}

bool FormulaADVISE::AccessdealershipWIFIAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::AccessdealershipWIFIAdversaryDecision::Weight() {
  return AccessdealershipWIFIWeight->Mark();
}

bool FormulaADVISE::AccessdealershipWIFIAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::AccessdealershipWIFIAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::AccessdealershipWIFIAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::AccessdealershipWIFIAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::AccessdealershipWIFIAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::AccessdealershipWIFIAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(AccessdealershipWIFIWeight_Mobius_Mark))--;
  (*(AccessdealershipWIFIChosen_Mobius_Mark))++;
  return this;
}

/*====================== ShellinjectiononPassThruAdversaryDecision ========================*/

FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::ShellinjectiononPassThruAdversaryDecision() {
  commonInit("ShellinjectiononPassThruAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::~ShellinjectiononPassThruAdversaryDecision() {
}

void FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  ShellinjectiononPassThruChosen->Register(&ShellinjectiononPassThruChosen_Mobius_Mark);
  ShellinjectiononPassThruWeight->Register(&ShellinjectiononPassThruWeight_Mobius_Mark);
}

bool FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::Weight() {
  return ShellinjectiononPassThruWeight->Mark();
}

bool FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::ShellinjectiononPassThruAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(ShellinjectiononPassThruWeight_Mobius_Mark))--;
  (*(ShellinjectiononPassThruChosen_Mobius_Mark))++;
  return this;
}

/*====================== SniffcarBluetoothMACaddressAdversaryDecision ========================*/

FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::SniffcarBluetoothMACaddressAdversaryDecision() {
  commonInit("SniffcarBluetoothMACaddressAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::~SniffcarBluetoothMACaddressAdversaryDecision() {
}

void FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  SniffcarBluetoothMACaddressChosen->Register(&SniffcarBluetoothMACaddressChosen_Mobius_Mark);
  SniffcarBluetoothMACaddressWeight->Register(&SniffcarBluetoothMACaddressWeight_Mobius_Mark);
}

bool FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::Weight() {
  return SniffcarBluetoothMACaddressWeight->Mark();
}

bool FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::SniffcarBluetoothMACaddressAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(SniffcarBluetoothMACaddressWeight_Mobius_Mark))--;
  (*(SniffcarBluetoothMACaddressChosen_Mobius_Mark))++;
  return this;
}

/*====================== ProgramthecarECUsAdversaryDecision ========================*/

FormulaADVISE::ProgramthecarECUsAdversaryDecision::ProgramthecarECUsAdversaryDecision() {
  commonInit("ProgramthecarECUsAdversaryDecision", 11, Instantaneous, RaceEnabled, 2, 1, false);
}

FormulaADVISE::ProgramthecarECUsAdversaryDecision::~ProgramthecarECUsAdversaryDecision() {
}

void FormulaADVISE::ProgramthecarECUsAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  ProgramthecarECUsChosen->Register(&ProgramthecarECUsChosen_Mobius_Mark);
  ProgramthecarECUsWeight->Register(&ProgramthecarECUsWeight_Mobius_Mark);
}

bool FormulaADVISE::ProgramthecarECUsAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double FormulaADVISE::ProgramthecarECUsAdversaryDecision::Weight() {
  return ProgramthecarECUsWeight->Mark();
}

bool FormulaADVISE::ProgramthecarECUsAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool FormulaADVISE::ProgramthecarECUsAdversaryDecision::ReactivationFunction() {
  return false;
}

double FormulaADVISE::ProgramthecarECUsAdversaryDecision::SampleDistribution() {
  return 0;
}

double* FormulaADVISE::ProgramthecarECUsAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int FormulaADVISE::ProgramthecarECUsAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* FormulaADVISE::ProgramthecarECUsAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(ProgramthecarECUsWeight_Mobius_Mark))--;
  (*(ProgramthecarECUsChosen_Mobius_Mark))++;
  return this;
}

