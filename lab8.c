#include <stdio.h>
#include <time.h>
#include <pthread.h>
#include <stdlib.h>

#include <fcntl.h> // open function
#include <unistd.h> 


void *func1()
{
    while(1){
        printf("Message from");
    }
}
void action(){
}

int main(int argc, char const *argv[])
{
    pthread_t threadid2;
    pthread_create(&threadid2, NULL, func1, NULL);
    sleep(2);
    return (0);
}
