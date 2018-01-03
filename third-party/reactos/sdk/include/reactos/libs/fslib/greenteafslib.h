/*
 * COPYRIGHT:   LGPL 2.1
 * PROJECT:     GreenteaOS Greentea filesystem library
 */
#ifndef __GREENTEAFSLIB_H
#define __GREENTEAFSLIB_H

#include <fmifs/fmifs.h>

NTSTATUS NTAPI
GreenteaFSFormat(
	IN PUNICODE_STRING DriveRoot,
	IN FMIFS_MEDIA_FLAG MediaFlag,
	IN PUNICODE_STRING Label,
	IN BOOLEAN QuickFormat,
	IN ULONG ClusterSize,
	IN PFMIFSCALLBACK Callback);

#endif /*__GREENTEAFSLIB_H */
