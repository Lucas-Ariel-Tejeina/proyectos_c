#include <stdio.h>

int main(){
    int x;
    printf("Este programa siempre te duelve el valor numero 5 para la variable x de tipo int.\n");
    printf("Ingrese un valor para x:");
    scanf("%d",&x);
    x = 5;
    printf("El valor de x = %d.\n",x);
    return 0;
}


/*
Este programa siempre te duelve el valor numero 5 para la variable x de tipo int.
Ingrese un valor para x:9
El valor de x = 5.

Este programa siempre te duelve el valor numero 5 para la variable x de tipo int.
Ingrese un valor para x:666
El valor de x = 5.

Este programa siempre te duelve el valor numero 5 para la variable x de tipo int.
Ingrese un valor para x:-25
El valor de x = 5.
*/