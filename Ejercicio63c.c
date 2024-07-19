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
    int x,y;
    char m,n;
    printf("Este programa busca que ingrese 2 variables de tipo int con un estado inicial.\n");
    printf("El estado final de la primera variable sera el estado inicial de ella misma multiplicada por 2.\n");
    printf("El estado final de la segunda variable sera el estado inicial de ella misma mas el estado final de la primera variable.\n");
    printf("Primera variable.\n");
    m = pedir_variable(m);
    y = pedir_entero(m);
    y = y + y;
    printf("Segunda variable.\n");
    n = pedir_variable(n);
    x = pedir_entero(n);
    x = x + y;
    imprimir_entero(m,y);
    imprimir_entero(n,x);
    return 0;
}
/*
Este programa busca que ingrese 2 variables de tipo int con un estado inicial.
El estado final de la primera variable sera el estado inicial de ella misma multiplicada por 2.
El estado final de la segunda variable sera el estado inicial de ella misma mas el estado final de la primera variable.
Primera variable.
Ingrese una variable:q
Ingrese un estado de tipo entero que se desee que se guarde en q:
Ingrese un estado:10
Segunda variable.
Ingrese una variable:w
Ingrese un estado de tipo entero que se desee que se guarde en w:
Ingrese un estado:1
El estado de q = 20.
El estado de w = 21.

Este programa busca que ingrese 2 variables de tipo int con un estado inicial.
El estado final de la primera variable sera el estado inicial de ella misma multiplicada por 2.
El estado final de la segunda variable sera el estado inicial de ella misma mas el estado final de la primera variable.
Primera variable.
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:15
Segunda variable.
Ingrese una variable:r
Ingrese un estado de tipo entero que se desee que se guarde en r:
Ingrese un estado:-9
El estado de e = 30.
El estado de r = 21.

Este programa busca que ingrese 2 variables de tipo int con un estado inicial.
El estado final de la primera variable sera el estado inicial de ella misma multiplicada por 2.
El estado final de la segunda variable sera el estado inicial de ella misma mas el estado final de la primera variable.
Primera variable.
Ingrese una variable:t
Ingrese un estado de tipo entero que se desee que se guarde en t:
Ingrese un estado:8
Segunda variable.
Ingrese una variable:y
Ingrese un estado de tipo entero que se desee que se guarde en y:
Ingrese un estado:8
El estado de t = 16.
El estado de y = 24.
*/