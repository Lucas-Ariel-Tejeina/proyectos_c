#include <stdio.h>
#include <stdbool.h>

bool pedir_bool(void){
    bool b;
    int booleano;
    printf("Por favor ingrese un valor un booleano (0 es false y 1 es true) que desee que se muestre por pantalla:\n");
    scanf("%d",&booleano);
    if(booleano == 1){
        b = true;
    } else {
        b = false;
    }
    return  b;
}

void imprimir_booleano(bool b){
    if(b){
        printf("El valor booleano es verdadero.\n");
    } else {
        printf("El valor booleano es falso.\n");
    }
}

int main(){
    bool b;
    b = pedir_bool();
    imprimir_booleano(b);
    return 0;
}
/*
Por favor ingrese un valor un booleano (0 es false y 1 es true) que desee que se muestre por pantalla:
0
El valor booleano es falso.

Por favor ingrese un valor un booleano (0 es false y 1 es true) que desee que se muestre por pantalla:
1
El valor booleano es verdadero.
*/