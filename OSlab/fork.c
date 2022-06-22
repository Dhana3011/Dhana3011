#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

void main()
{
    pid_t pid;
    int x=5;
    pid=fork();
    x++;
    if (pid<0){
        printf("error");
        exit(-1);

    }else if(pid==0){
        printf("\n child process");
        printf("\n process id %d",getpid());
        printf("\n value of x is %d",x);
        printf("\n parent process id %d",getppid());
    }else{
         printf("\n parent process");
        printf("\n process id %d",getpid());
        printf("\n value of x is %d",x);
        printf("\n parent process id %d",getppid());

    }
}

