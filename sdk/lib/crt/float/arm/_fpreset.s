/*
 * COPYRIGHT:         BSD - See COPYING.ARM in the top level directory
 * PROJECT:           CRT library
 * PURPOSE:           Implementation of _fpreset
 * PROGRAMMER:        Timo Kreuzer (timo.kreuzer@reactos.org)
 */

/* INCLUDES ******************************************************************/

#include <kxarm.h>

/* CODE **********************************************************************/

    TEXTAREA

    LEAF_ENTRY _fpreset

	__assertfail
	bx	lr

    LEAF_END _fpreset

    END
/* EOF */
