/*
 * COPYRIGHT:   See COPYING in the top level directory
 * PROJECT:     TCP/IP protocol driver
 * FILE:        tcpip/lock.c
 * PURPOSE:     Waiting and signalling
 * PROGRAMMERS: Art Yerkes
 * REVISIONS:
 */

#include "precomp.h"

NTSTATUS TcpipWaitForSingleObject( PVOID Object,
				   KWAIT_REASON Reason,
				   KPROCESSOR_MODE WaitMode,
				   BOOLEAN Alertable,
				   PLARGE_INTEGER Timeout ) {
    return STATUS_SUCCESS;
}