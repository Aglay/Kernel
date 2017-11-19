/*
 * LICENSE:         GPL - See COPYING in the top level directory
 * PROJECT:         Console Server DLL
 * FILE:            win32ss/user/winsrv/consrv_new/lineinput.h
 * PURPOSE:         Console line input functions
 * PROGRAMMERS:     Jeffrey Morlan
 */

#pragma once

VOID FASTCALL HistoryDeleteBuffers(PCONSOLE Console);
VOID FASTCALL LineInputKeyDown(PCONSOLE Console, KEY_EVENT_RECORD *KeyEvent);

/* EOF */
