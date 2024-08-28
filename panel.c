#include "header.h"

main(){
    key_t key;
    int shmID;
    int *shm;
    int choice;
    int timeDuration;
    int TIMER;



    while (1)   
        {
            // menu 
        // printf("1. timer\n");
        // printf("2. 2\n");

        scanf("%d", &choice);
        if(choice == 1){
            // get reset value from user
            scanf("%d", &timeDuration);
            *(shm+TIMER)) = timeDuration;
        }
        else if(choice == 2){
            // do something
            
        }
    }
}
