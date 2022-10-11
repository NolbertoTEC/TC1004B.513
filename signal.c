#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void holaMundo(int signalNumber){
    if(signalNumber == 10){
        printf("Es la señal 10\n");
    } else {
        printf("Es otra señal");
    }
}

void nomematas(int sig){
    printf("jajajaja, no me matas\n");
}

int main(){
    signal(12,holaMundo);
    signal(10,holaMundo);
    signal(2,nomematas);
    while(1){
        printf("Estoy trabajando \n");
        sleep(1);
    }
    printf("Nunca llega\n");
    return 0;
}