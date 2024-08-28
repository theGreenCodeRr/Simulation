#include "header.h"

main(){
    int door;
    key_t key;
    int shmID;
    int *shm;
    int doorStat;

    srand(time(NULL));
    key = 0x520260A;

    shmID = shmget(key, sizeof(int)*10, 0666);
    shm = shmat(shmID, 0, 0);

    while(*(shm+SYNCH) == 0);


    while (1){
        // open or close
        // printf("1. ope or close\n");
        scanf("%d", &door);
        if(door == 0){
            *(shm+DOOR) = 0;
        }
        else {
            *(shm+DOOR) = 1;
        }
    }
    
}