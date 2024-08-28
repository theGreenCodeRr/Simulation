main(){
    tc == 0; // initial value for timer
    while(1){
        if ( *(shm+TIMER) == CLOSED){
            tc = *(shm+TIMER);
            if(tc>0){
                tc--;
                *(shm+TIMER) = tc;
            }
        }
        sleep(1);

}