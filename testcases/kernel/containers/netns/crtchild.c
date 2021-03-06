/*************************************************************************
* Copyright (c) International Business Machines Corp., 2008
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
* the GNU General Public License for more details.
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*
***************************************************************************/
/* ============================================================================
* This testcase uses the libnetns.c from the library to create network NS.
* In libnetns.c it uses 2 scripts parentns.sh and childns.sh to create this.
* After creating the NS, this program verifies that the network is reachable
* from parent-NS to child-NS and vice-versa.
*
* Scripts Used: parentns.sh, childns.sh ,  parent.sh , child.sh.
*
* Author: Veerendra C <vechandr@in.ibm.com>
*                      31/07/2008
* =============================================================================*/

#include "libclone.h"

const char *TCID = "crtchild";

int main(void)
{
	int status;
	status = create_net_namespace("parent.sh", "child.sh");
	return status;
}
