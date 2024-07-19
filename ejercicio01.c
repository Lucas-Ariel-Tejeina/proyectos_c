#include <stdio.h>
#include <assert.h>

int pedir_entero(){
    int x;
    printf("Ingrese un entero positivo:");
    scanf("%d",&x);
    return x;
}
void hola_hasta(int n){
    int i = 0;
    do {
        printf("Hola\n");
        i++;
    }while(i < n);
}

int main(){
    int x;
    printf("Este programa busca repetir la palabra 'Hola' una cierta cantidad de veces.\n");
    x = pedir_entero();
    assert(x > 0);
    hola_hasta(x);
    return 0;
}
/*
Este programa busca repetir la palabra 'Hola' una cierta cantidad de veces.
Ingrese un entero positivo:5
Hola
Hola
Hola
Hola
Hola

Este programa busca repetir la palabra 'Hola' una cierta cantidad de veces.
Ingrese un entero positivo:-1
ejercicio01: /home/lucas/Desktop/proyecto4.c/ejercicio01.c:22: main: Assertion `x > 0' failed.
*/