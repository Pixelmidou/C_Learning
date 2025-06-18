#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t p1 = fork();
    if (p1 == 0) {
        printf("je suis le fils .PID= %d.\n",getpid());
        printf("je suis le fils .PID de mon pere est = %d.\n",getppid());
        return execlp("ls", "ls", "-l", NULL);
    } else if (p1 > 0) {
        printf("Je suis le pere. PID= %d.\n",getpid());
        pid_t pidf = wait(NULL);
        printf("Je suis le pere. PID de mon fils est = %d.\n", pidf);
    }
    printf("\n");
    return 0;
} 