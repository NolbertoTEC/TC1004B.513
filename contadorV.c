#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char c;
    char may;
    int n = 0;
    int contador = 0;
    do{
        n = read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if (may == 'A' || 
        may == 'I' || 
        may == 'O' || 
        may == 'E' || 
        may == 'U'){
            contador += 1;
        }
    } while (n !=0);
    printf("El total de vocales es %d\n", contador);
    return 0;
}