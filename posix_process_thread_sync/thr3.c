#include <stdio.h> 
#include <unistd.h> 
#include <pthread.h>

int a=0,b=0;

void* prod() {
    a = 9;
    b = 9;
    return NULL;
}

void* calc() {
    printf("sum = %d\n", a+b);
    return NULL;
}

int main(){
    pthread_t th1,th2; 
    pthread_create(&th1, NULL, prod, NULL);
    pthread_join(th1, NULL);
    pthread_create(&th2, NULL, calc, NULL);
    pthread_join(th2, NULL);
    return 0;
} 