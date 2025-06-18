#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int status_paire,status_impaire;
    pid_t pid_paire = fork();
    if (pid_paire == 0) {
        puts("\nfils 1\n");
        int somme_paire = 0;
        for (int i = 10; i <= 10; i++) {
            if (i % 2 == 0) {
                somme_paire += i;
            }
        }
        return somme_paire;
    } else if (pid_paire > 0) {
        pid_t pid_impaire = fork();
        if (pid_impaire == 0) {
            sleep(1);
            puts("\nfils 2\n");
            int somme_impaire = 0;
            for (int i = 10; i <= 20; i++) {
                if (i % 2 != 0) {
                    somme_impaire += i;
                }
            }
            return somme_impaire;
        } else if (pid_impaire > 0) {
            waitpid(pid_paire,&status_paire,0);
            waitpid(pid_impaire,&status_impaire,0);
            printf("\nsomme_paire = %d\nsomme_impaire = %d", WEXITSTATUS(status_paire), WEXITSTATUS(status_impaire));
        }
    }
    printf("\n");
    return 0;
} 