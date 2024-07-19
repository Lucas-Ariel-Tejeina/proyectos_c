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
    printf("Donde el estado final de la primera variable sera el estado inicial de ella misma mas el estado inicial de la segunda variable.\n");
    printf("El estado final de la segunda variable sera el estado inicial de ella misma multiplicada por 2.\n");
    printf("Primera variable:\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    printf("Segunda variable:\n");
    n = pedir_variable(n);
    y = pedir_entero(n);
    x = x + y;
    y = y + y;
    imprimir_entero(m,x);
    imprimir_entero(n,y);
    return 0;
}
/*
Este programa busca que ingrese 2 variables de tipo int con una estado inicial.
Donde el estado final de la primera variable sera el estado inicial de ella misma mas el estado inicial de la segunda variable.
El estado final de la segunda variable sera el estado inicial de ella misma multiplicada por 2.
Primera variable:
Ingrese una variable:a
Ingrese un estado de tipo entero que se desee que se guarde en a:
Ingrese un estado:17
Segunda variable:
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:5
El estado de a = 22.
El estado de e = 10.

Este programa busca que ingrese 2 variables de tipo int con un estado inicial.
Donde el estado final de la primera variable sera el estado inicial de ella misma mas el estado inicial de la segunda variable.
El estado final de la segunda variable sera el estado inicial de ella misma multiplicada por 2.
Primera variable:
Ingrese una variable:q
Ingrese un estado de tipo entero que se desee que se guarde en q:
Ingrese un estado:-36
Segunda variable:
Ingrese una variable:c
Ingrese un estado de tipo entero que se desee que se guarde en c:
Ingrese un estado:-8
El estado de q = -44.
El estado de c = -16.

Este programa busca que ingrese 2 variables de tipo int con un estado inicial.
Donde el estado final de la primera variable sera el estado inicial de ella misma mas el estado inicial de la segunda variable.
El estado final de la segunda variable sera el estado inicial de ella misma multiplicada por 2.
Primera variable:
Ingrese una variable:l
Ingrese un estado de tipo entero que se desee que se guarde en l:
Ingrese un estado:0
Segunda variable:
Ingrese una variable:h
Ingrese un estado de tipo entero que se desee que se guarde en h:
Ingrese un estado:0
El estado de l = 0.
El estado de h = 0.
*/