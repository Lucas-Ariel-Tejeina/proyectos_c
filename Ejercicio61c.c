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
    int x,y,res;
    char m,n,r;
    printf("Este programa compara expresiones de variables entendiendose por 0 como false y 1 como true.\n");
    m = pedir_variable(m);
    x = perdir_entero(m);
    n = pedir_variable(n);
    y = perdir_entero(n);
    printf("Ingrese un vatiable donde desee que se guarde el estado resultante:\n");
    r = pedir_variable(r);
    res = (y - 2 == (x * 3 + 1) % 5);
    imprimir_entero(r,res);
    return 0;
}
/*
Este programa compara expresiones de variables entendiendose por 0 como false y 1 como true.
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:9
Ingrese una variable:t
Ingrese un estado de tipo entero que se desee que se guarde en t:
Ingrese un estado:55
Ingrese un vatiable donde desee que se guarde el estado resultante:
Ingrese una variable:r
El estado de r = 0.

Este programa compara expresiones de variables entendiendose por 0 como false y 1 como true.
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:8
Ingrese una variable:t
Ingrese un estado de tipo entero que se desee que se guarde en t:
Ingrese un estado:2
Ingrese un vatiable donde desee que se guarde el estado resultante:
Ingrese una variable:r
El estado de r = 1.
*/