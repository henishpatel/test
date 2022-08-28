#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    void (*p1)(int);
    void (*p2)(int);
    void (*p3)(int);
    void (*p4)(int);

    alarm(10);
    p1 = signal(SIGINT, SIG_IGN);
    p2 = signal(SIGALRM, SIG_IGN);
    p3 = signal(SIGALRM, p1);
    p4 = signal(SIGINT, p2);
    pause();
    printf("Terminated\n");
}