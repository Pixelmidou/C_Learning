#include <stdio.h> 
#include <unistd.h> 
#include <pthread.h>

void* affichage(void* name) { 
    printf("my name is %s \n", (char*)name); 
    return NULL; 
} 
int main(){ 
    pthread_t th;
    pthread_create(&th, NULL, affichage, "pixel"); 
    // sleep(1);
    pthread_join(th, NULL);
    printf("fin\n"); 
    return 0;
} 