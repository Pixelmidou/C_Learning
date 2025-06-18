#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t p1 = fork();
    if (p1 == 0) {
        printf("je suis le fils .PID=%d.\n",getpid());
        sleep(1);
        printf("Je retourne la valeur 4.\n");
        return 4;
    } else if (p1 > 0) {
        printf("Je suis le pere. PID=%d.\n",getpid());
        int status;
        pid_t pidretour = wait(&status); //récupérer le PID du fils et son code de retour
        printf("Mon fils %d se termine avec le valeur de retour %d\n",pidretour ,WEXITSTATUS(status));
    }
    printf("\n");
    return 0;
} 