#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>


enum op {SYNCH, DOOR, TIME, PANEL, LIGHT, TURNTBL, EMITTER, KEYPAD}
