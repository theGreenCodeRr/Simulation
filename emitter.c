#include "header.h"

main(){
    key_t key;
    int shmID;
    int *shm;
    int cookTime;
    int doorStat;

    srand(time(NULL));

    key = 0x520260A;

    shmID = shmget(key, sizeof(int)*10, 0666);
    shm = shmat(shmID, 0, 0);

    while(*shm+SYNCH);

    while (1){
        
    }
}