#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    for(int i = 0; i < 3; i++){    
        switch (fork())
        {
        case -1:
            perror("fork error");
            exit(1);
        case 0: 
            execlp("./print_process.x","./print_process.x",(char *) NULL);
            printf("\n");
            perror("execlp error");
            _exit(2);
        default:
            wait(NULL);
        };
    }
}