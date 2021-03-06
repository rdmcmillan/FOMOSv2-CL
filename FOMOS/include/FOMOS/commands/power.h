/* This file is for shutting down and/or restarting fomos */

#ifndef FOMOSV2_CL_POWER_H
#define FOMOSV2_CL_POWER_H

#include <stdio.h>
#include <stdlib.h>

void restart() {
    printf("Restarting... \n");
    // this should run restart.c
    system("./commands/restart/restart");
    // exit(0);
}

void shutdown() {
    printf("Shutting down... \n");
    system("./commands/shutdown/shutdown");
    // exit(0);
}

/* Is the exit() really needed?
 * If and exit() is called FOMOS will probably stop,
 * because FOMOS stopped would that turn off the device?
 * But because shutdown/restart turns off the device then the exit() is useless
 * But if shutdown/restart fails should exit() try to turn off the device? */

#endif //FOMOSV2_CL_POWER_H
