#include <stdio.h> 
#include <unistd.h> 
#include <pthread.h>

void* affichage() { 
    printf("pid=%d\n",getpid()); 
    printf("tid=%ld\n",pthread_self()); 
    return NULL; 
} 
int main() { 
    pthread_t th; 
    pthread_create(&th, NULL, affichage, NULL); 
    sleep(1); 
    printf("L’identifiant  du main=%d\n",getpid()); 
    printf("fin\n"); 
    return 0;
}