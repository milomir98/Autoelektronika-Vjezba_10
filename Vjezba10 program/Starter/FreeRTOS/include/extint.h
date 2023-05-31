#ifndef _EXTINT_H
#define _EXTINIT_H

#include <Windows.h>

#define portINTERRUPT_EXTSIM	( 2UL )
#define portINTERRUPT_SRL_TBE   ( 3UL )
#define portINTERRUPT_SRL_RXC   ( 4UL )
#define portINTERRUPT_SRL_OIC   ( 5UL )

DWORD WINAPI prvExternalInterruptCatcher(LPVOID lpParameter);

#endif