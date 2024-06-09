OBJS=FormulaADVISE.o 


#include common Makefile for default targets
include ../../Makefile.project
include $(MOBIUSROOT)/Cpp/BaseClasses/Makefile.common

all: normal
opt: $(ROOTDIR)/lib/$(PLATFORM)/libFormulaADVISE.a
normal debug trace: $(ROOTDIR)/lib/$(PLATFORM)/libFormulaADVISE_debug.a

$(ROOTDIR)/lib/$(PLATFORM)/libFormulaADVISE.a: FORCE
	$(MAKE) lib TARGET=libFormulaADVISE.a OBJS="$(OBJS)" USERINCLUDE="$(USERINCLUDE)" TYPE="" ROOTLIBDIR="."

$(ROOTDIR)/lib/$(PLATFORM)/libFormulaADVISE_debug.a: FORCE
	$(MAKE) lib TARGET=libFormulaADVISE_debug.a OBJS="$(OBJS)" USERINCLUDE="$(USERINCLUDE)" TYPE="_debug" ROOTLIBDIR="."

clean_sub_dirs:

