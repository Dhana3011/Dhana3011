#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
    int i,status;
    pid_t pid;

    pid = fork();

    if(pid < 0){
        printf("error");
    } 
    else if(pid >0){
        // wait(NULL);
        printf("\n Parent starts");
        for(i = 2; i <= 10; i+=2)
            printf("%d ", i);
        
    }
    else{
        // wait(NULL);
        printf("\n Child starts");
        for(i = 1; i <= 10; i+=2)
            printf("%d ", i);
    }
    
}