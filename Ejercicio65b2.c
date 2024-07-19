#include <stdio.h>
#include <stdbool.h>

int pedir_entero(char name){
    int x;
    printf("Ingrese un estado de tipo entero que se desee que se guarde en %c:\n",name);
    printf("Ingrese un estado:");
    scanf("%d",&x);
    return x;
}

char pedir_variable(char t){
    printf("Ingrese una variable:");
    scanf(" %c",&t);
    return t;
}

int main(){
    int x,i = 2;
    char m,n;
    bool res = true;
    printf("Este programa le pedira que ingrese una variable y un estado asociado, donde de buscara determinar si dicho estado es un numero primo.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    do{
        res = res && (x % i) != 0;
        i++;
    }while(i < x && res);
    if(res){
        printf("No hay ningun numero desde 2 hasta %d que divida a %d.\n",x,x);
    } else {
        printf("Existe al menos un numero que entre 2 y %d que divide a %d.\n",x,x);
    }
    return 0;
}
/*
En este programa a diferencia de todos los anteriores no pudimos incluir la funcion
imprimir_entero ya que el resultado de este ejercicio era hacer explicito si un estado dado
era primo o no, y no de decir cual era el estado final de una variable.

Este programa le pedira que ingrese una variable y un estado asociado, donde de buscara determinar si dicho estado es un numero primo.
Ingrese una variable:q
Ingrese un estado de tipo entero que se desee que se guarde en q:
Ingrese un estado:17
No hay ningun numero desde 2 hasta 17 que divida a 17.
*/