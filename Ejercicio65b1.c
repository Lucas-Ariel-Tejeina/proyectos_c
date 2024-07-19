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
    int x,y,i = 0;
    char m,n;
    printf("Este programa busca que ingrese 2 variables con un estado inicial correspondientemente.\n");
    printf("Donde si el estado de la primera variable es mas grande que el estado inicial de la segunda variable, ");
    printf("se restara el estado de la segunda variable a la primera hasta que el estado de la primera variable sea menor que el estado de la segunda.\n");
    printf("Primera variable.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    printf("Segunda variable.");
    n = pedir_variable(n);
    y = pedir_entero(n);
    do{
        x = x - y;
        i = i + 1;
        printf("El estado de las variables luego de la interacion %d, es x = %d, y = %d.\n",i,x,y);
    }while(x >= y);
    imprimir_entero(m,x);
    imprimir_entero(n,y);
    return 0;
}
/*
Este programa busca que ingrese 2 variables con un estado inicial correspondientemente.
Donde si el estado de la primera variable es mas grande que el estado inicial de la segunda variable,
se restara el estado de la segunda variable a la primera hasta que el estado de la primera variable sea menor que el estado de la segunda.
Primera variable.
Ingrese una variable:q
Ingrese un estado de tipo entero que se desee que se guarde en q:
Ingrese un estado:14
Segunda variable.Ingrese una variable:w
Ingrese un estado de tipo entero que se desee que se guarde en w:
Ingrese un estado:3
El estado de las variables luego de la interacion 1, es x = 11, y = 3.
El estado de las variables luego de la interacion 2, es x = 8, y = 3.
El estado de las variables luego de la interacion 3, es x = 5, y = 3.
El estado de las variables luego de la interacion 4, es x = 2, y = 3.
El estado de q = 2.
El estado de w = 3.
*/