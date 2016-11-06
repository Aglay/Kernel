
#include <syscalls.inc>

.code

#define SVC_(name, argcount) STUB_U name, argcount

#include <sysfuncs.h>

END
