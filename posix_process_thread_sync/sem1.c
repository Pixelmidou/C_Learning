#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include <semaphore.h> 
#include <unistd.h>

sem_t mutex; 

void* affichage (void* name) { 
    int i, j; 
    for(i = 0; i < 20; i++) { 
        sem_wait(&mutex);
        for(j=0; j<20; j++) {
            printf("%s ",(char*)name);
            usleep(100);     
        }
        printf("\n "); 
        sem_post(&mutex);  
    }  
    return NULL; 
}
int main () { 
    pthread_t th1, th2; 
    sem_init(&mutex, 0, 1); 
    pthread_create(&th1, NULL, affichage, "AA"); 
    pthread_create(&th2, NULL, affichage, "BB"); 
    pthread_join(th1, NULL); 
    pthread_join(th2, NULL); 
    printf("Fin du programme\n"); 
    return (EXIT_SUCCESS); 
} 