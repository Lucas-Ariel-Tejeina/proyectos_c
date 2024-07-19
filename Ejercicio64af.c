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
    printf("Este programa buscara que usted ingrese 2 variables con un estado inicial correspondiente.\n");
    printf("El programa buscara comparar ambos estados de las variables.\n");
    printf("Si el estado de la primera variable es mayor o igual al de la segunda variable, el estado final de la primera variable sera 0, caso contrario 2.\n");
    printf("Primera variable.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    printf("Segunda variable.\n");
    n = pedir_variable(n);
    y = pedir_entero(n);
    if(x >= y){
        x = 0;
    } else if (x <= y){
        x = 2;
    }
    imprimir_entero(m,x);
    imprimir_entero(n,y);
    return 0;
}
/*
Este programa buscara que usted ingrese 2 variables con un estado inicial correspondiente.
El programa buscara comparar ambos estados de las variables.
Si el estado de la primera variable es mayor o igual al de la segunda variable, el estado final de la primera variable sera 0, caso contrario 2.
Primera variable.
Ingrese una variable:x
Ingrese un estado de tipo entero que se desee que se guarde en x:
Ingrese un estado:-100
Segunda variable.
Ingrese una variable:y
Ingrese un estado de tipo entero que se desee que se guarde en y:
Ingrese un estado:1
El estado de x = 2.
El estado de y = 1.
*/