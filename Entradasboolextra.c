#include <stdio.h>
#include <stdbool.h>

bool pedir_bool(char name){
    bool b;
    int booleano;
    printf("Por favor ingrese un valor un booleano (1 es true y cualquier otro false) que desee que tenga la variable:\n");
    printf("Ingrese el valor:");
    scanf("%d",&booleano);
    if(booleano == 1){
        b = true;
    } else {
        b = false;
    }
    return  b;
}

void imprimir_booleano(bool b, char name){
    if(b){
        printf("El valor booleano de %c = verdadero.\n",name);
    } else {
        printf("El valor booleano de %c = falso.\n",name);
    }
}

int main(){
    bool b;
    char n;
    printf("Ingrese una variable de tipo char:");
    scanf(" %c",&n);
    b = pedir_bool(n);
    imprimir_booleano(b,n);
    return 0;
}
/*
Ingrese una variable de tipo char:a
Por favor ingrese un valor un booleano (0 es false y 1 es true) que desee que tenga la variable:
Ingrese el valor:5
El valor booleano de a = falso.

Ingrese una variable de tipo char:v
Por favor ingrese un valor un booleano (1 es true y cualquier otro false) que desee que tenga la variable:
Ingrese el valor:1
El valor booleano de v = verdadero.
*/