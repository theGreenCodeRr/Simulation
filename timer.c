#include "header.h"

main(){
    key_t key;
    int shmID;
    int *shm;
    int tc;
    int TIMER;
    int cookTime;
    key = 0x520260A;
    shmID = shmget(key, sizeof(int)*10, 0666);
    shm = shmat(shmID, 0, 0);
    *(shm+TIMER) = 0; // initial value for timer




    tc == 0; // initial value for timer
    while(1){
        if ( *(shm+TIMER) == 0){
            cookTime = *(shm+TIMER);
            if(cookTime>0){
                cookTime--;
                *(shm+TIMER) = cookTime;
            }
        }
        sleep(1);
        

}