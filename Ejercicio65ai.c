#include <stdio.h>

int pedir_entero(char name){
    int x;
    printf("Ingrese un estado de tipo entero que se desee que se guarde en %c:\n",name);
    printf("Ingrese un estado:");
    scanf("%d",&x);
    return x;
}

void imprimir_entero(char name, int x){
    printf("El estado de %c = %d.\n",name,x);
}

char pedir_variable(char t){
    printf("Ingrese una variable:");
    scanf(" %c",&t);
    return t;
}

int main(){
    int x;
    char m;
    printf("Este programa le pedira que ingrese una variable con un estado asociado y donde el estado final de la variable sera 0.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    do{
        x = 0;
    }while(x != 0);
    imprimir_entero(m,x);
    return 0 ;
}
/*
Este programa le pedira que ingrese una variable con un estado asociado y donde el estado final de la variable sera 0.
Ingrese una variable:q
Ingrese un estado de tipo entero que se desee que se guarde en q:
Ingrese un estado:400
El estado de q = 0.
*/