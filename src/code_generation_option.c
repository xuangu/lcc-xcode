#include "c.h"
extern CodeGenerationInterface nullIR,   symbolicIR;
extern CodeGenerationInterface mipsebIR, mipselIR;
extern CodeGenerationInterface sparcIR,  solarisIR;
extern CodeGenerationInterface x86IR;

CodeGenerationOption supported_code_generation_options[] = {
	"symbolic",      &symbolicIR,
	"mips-irix",     &mipsebIR,
	"mips-ultrix",   &mipselIR,
	"sparc-sun",     &sparcIR,
	"sparc-solaris", &solarisIR,
	"x86-dos",       &x86IR,
	"symbolic/irix", &symbolicIR,		/* omit */
	"mips/irix",     &mipsebIR,		/* omit */
	"mips/ultrix",   &mipselIR,		/* omit */
	"sparc/sun",     &sparcIR,		/* omit */
	"sparc/solaris", &solarisIR,		/* omit */
	"x86/dos",       &x86IR,		/* omit */
	"null",          &nullIR,
	NULL,            NULL
};
