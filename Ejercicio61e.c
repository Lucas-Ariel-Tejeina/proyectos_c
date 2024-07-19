#include <stdio.h>

int perdir_entero(char name){
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
    int x,y,z,res;
    char m,n,b,v;
    printf("Este programa compara la primera variable con el producto de otras 2 variables.\n");
    printf("Entendiendose 0 por false y 1 por true.\n");
    m = pedir_variable(m);
    y = perdir_entero(m);
    n = pedir_variable(n);
    x = perdir_entero(n);
    b = pedir_variable(b);
    z = perdir_entero(b);
    printf("Ingrese una variable donde desee que se guarde el estado resultante:\n");
    v = pedir_variable(v);
    res = y < x * z;
    imprimir_entero(v,res);
    return 0;
}
/*
Este programa compara la primera variable con el producto de otras 2 variables.
Entendiendose 0 por false y 1 por true.
Ingrese una variable:w
Ingrese un estado de tipo entero que se desee que se guarde en w:
Ingrese un estado:8
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:96
Ingrese una variable:t 
Ingrese un estado de tipo entero que se desee que se guarde en t:
Ingrese un estado:1
Ingrese una variable donde desee que se guarde el estado resultante:
Ingrese una variable:r
El estado de r = 1.

Este programa compara la primera variable con el producto de otras 2 variables.
Entendiendose 0 por false y 1 por true.
Ingrese una variable:y
Ingrese un estado de tipo entero que se desee que se guarde en y:
Ingrese un estado:6
Ingrese una variable:p
Ingrese un estado de tipo entero que se desee que se guarde en p:
Ingrese un estado:36
Ingrese una variable:q
Ingrese un estado de tipo entero que se desee que se guarde en q:
Ingrese un estado:-1
Ingrese una variable donde desee que se guarde el estado resultante:
Ingrese una variable:r
El estado de r = 0.
*/