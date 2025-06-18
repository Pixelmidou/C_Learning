#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int stat1,stat2;
    pid_t p1 = fork();
    if (p1 == 0) {
        puts("\nfils 1\n");
        return execlp("ls", "ls", "-l", NULL);
    } else if (p1 > 0) {
        pid_t p2 = fork();
        if (p2 == 0) {
            sleep(1);
            puts("\nfils 2\n");
            return execlp("ps", "ps", "-l", NULL);
        } else if (p2 > 0) {
            waitpid(p1,&stat1,0);
            waitpid(p2,&stat2,0);
            printf("\nJe suis le pere. PID= %d.\n",getpid());
        }
    }
    printf("\n");
    return 0;
} 