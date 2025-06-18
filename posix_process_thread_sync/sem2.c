#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include <semaphore.h> 
#include <unistd.h>

sem_t sem_AA, sem_BB;

void* affichage_AA(void* arg) { 
    int i, j; 
    for (i = 0; i < 20; i++) { 
        sem_wait(&sem_AA); // attendre le tour de AA 
        for(j=0; j<20; j++) { 
            printf("AA ");
            usleep(100); 
        } 
        printf("\n"); 
        sem_post(&sem_BB); // donner le tour à BB 
    } 
    return NULL; 
} 
 
void* affichage_BB(void* arg) { 
    int i, j; 
    for (i = 0; i < 20; i++) { 
        sem_wait(&sem_BB); // attendre le tour de BB 
        for(j=0; j<20; j++) { 
            printf("BB "); 
            usleep(100); 
        }   
        printf("\n"); 
        sem_post(&sem_AA); // donner le tour à AA 
    } 
    return NULL; 
} 
 
int main(void) { 
    pthread_t th1, th2; 
 
    sem_init(&sem_AA, 0, 1); // AA commence (valeur = 1) 
    sem_init(&sem_BB, 0, 0); // BB attend (valeur = 0) 
 
    pthread_create(&th1, NULL, affichage_AA, NULL); 
    pthread_create(&th2, NULL, affichage_BB, NULL); 
 
    pthread_join(th1, NULL); 
    pthread_join(th2, NULL); 
 
    printf("Fin du programme\n"); 
 
    sem_destroy(&sem_AA); 
    sem_destroy(&sem_BB); 
 
    return EXIT_SUCCESS; 
} 