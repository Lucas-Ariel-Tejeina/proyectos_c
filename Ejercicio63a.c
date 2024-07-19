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
    printf("Este programa siempre te duelve el valor numero 5 para la variable x de tipo int.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    x = 5;
    imprimir_entero(m,x);
    return 0;
}
/*
Este programa siempre te duelve el valor numero 5 para la variable x de tipo int.
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:17
El estado de e = 5.

Este programa siempre te duelve el valor numero 5 para la variable x de tipo int.
Ingrese una variable:a
Ingrese un estado de tipo entero que se desee que se guarde en a:
Ingrese un estado:-236
El estado de a = 5.

Este programa siempre te duelve el valor numero 5 para la variable x de tipo int.
Ingrese una variable:w
Ingrese un estado de tipo entero que se desee que se guarde en w:
Ingrese un estado:5
El estado de w = 5.
*/