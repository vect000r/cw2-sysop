#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void print_child(){
    printf("PID: %d, PPID: %d", getpid(), getppid());
}

int main(){
    print_child();
}