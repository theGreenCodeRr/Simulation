#include "header.h"

int main(){
    key_t key;
    int shmID;
    int *shm;

    key = 0x520260A;
    shmID = shmget(key, 8, IPC_CREAT | 0666);
    shm = shmat(shmID, 0, 0);
    *(shm+SYNCH) = 0;
    printf("Run all Program now, then hit return key \n");

    getchar();
    *(shm+SYNCH) = 1;

    while (1){
        int cookTime;

        printf("cook time: %d\n", cookTime);
        printf("door stat: %d\n", *(shm+DOOR));
        printf("Emitter: %d\n", *(shm+EMITTER));

        sleep(1);
    }
    
}