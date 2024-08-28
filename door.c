main(){
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