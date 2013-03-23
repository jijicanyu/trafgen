//****************************************************************************/
// File:            common.h
// Authors:         Sivasankar Radhakrishnan <sivasankar@cs.ucsd.edu>
//****************************************************************************/

#ifndef COMMON_H
#define COMMON_H

using namespace std;

/*
 * Standard C Libraries
 */
extern "C" {
#include <arpa/inet.h>
#include <errno.h>
#include <net/if.h>
#include <netdb.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
}

/*
 * C++ Libraries
 */
#include <gflags/gflags.h>
#include <iostream>


//****************************************************************************/
// Declare Common Flags for Traffic Generator
//****************************************************************************/

DECLARE_bool(s);
DECLARE_bool(c);
DECLARE_bool(tcp);
DECLARE_bool(udp);
DECLARE_int32(start_port);
DECLARE_int32(num_ports);


//****************************************************************************/
// Global (External) Variable Declarations
//****************************************************************************/

extern volatile bool interrupted;


//****************************************************************************/
// Global (External) Function Declarations
//****************************************************************************/

void *client_thread_main(void *arg);

#endif