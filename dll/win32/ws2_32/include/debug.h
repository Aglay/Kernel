/*
 * COPYRIGHT:   See COPYING in the top level directory
 * PROJECT:     ReactOS WinSock 2 DLL
 * FILE:        dll/win32/ws2_32/include/debug.h
 * PURPOSE:     Debugging support macros
 * DEFINES:     DBG     - Enable debug output
 *              NASSERT - Disable assertions
 */

#ifndef __DEBUG_H
#define __DEBUG_H

#define NORMAL_MASK    0x000000FF
#define SPECIAL_MASK   0xFFFFFF00
#define MIN_TRACE      0x00000001
#define MID_TRACE      0x00000002
#define MAX_TRACE      0x00000003

#define DEBUG_CHECK    0x00000100
#define DEBUG_ULTRA    0xFFFFFFFF

#ifdef ASSERT
#undef ASSERT
#endif

#if DBG

extern DWORD DebugTraceLevel;

#define WS_DbgPrint(_t_, _x_) \
    if ((_t_ > NORMAL_MASK) \
        ? (DebugTraceLevel & _t_) > NORMAL_MASK \
        : (DebugTraceLevel & NORMAL_MASK) >= _t_) { \
        DbgPrint("(%hS:%d)(%hS) ", __FILE__, __LINE__, __FUNCTION__); \
		DbgPrint _x_; \
    }

#ifdef NASSERT
#define ASSERT(x)
#else /* NASSERT */
#define ASSERT(x) if (!(x)) { WS_DbgPrint(MIN_TRACE, ("Assertion "#x" failed at %s:%d\n", __FILE__, __LINE__)); ExitProcess(0); }
#endif /* NASSERT */

#else /* DBG */

#define WS_DbgPrint(_t_, _x_)

#define ASSERT_IRQL(x)
#define ASSERT(x)

#endif /* DBG */


#define assert(x) ASSERT(x)
#define assert_irql(x) ASSERT_IRQL(x)


#define UNIMPLEMENTED \
    WS_DbgPrint(MIN_TRACE, ("is unimplemented, please try again later.\n"));

#define CHECKPOINT \
    WS_DbgPrint(DEBUG_CHECK, ("\n"));

#define CP CHECKPOINT

#endif /* __DEBUG_H */
