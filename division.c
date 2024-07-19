#include <stdio.h>

int pedir_entero(int n){
    printf("Ingrese un entero positivo:");
    scanf("%d",&n);
    return n;
}

struct div_t {
int cociente;
int resto;
};

struct div_t division(int x, int y){
    struct div_t resultado;
    resultado.cociente = x / y;
    resultado.resto = x % y;
    return resultado;
}

void imprimir_resultado(int c, int r,int x, int y){
    printf("el Cociente entre %d y %d es %d.\n",x,y,c);
    printf("el Resto entre %d y %d es %d.\n",x,y,r);
}

int main(){
    int dividendo,divisor;
    struct div_t resultado;
    printf("Este programa calcula el resto y conciente entero.\n");
    printf("Dividendo, ingrese un entero no negativo.\n");
    dividendo = pedir_entero(dividendo);
    printf("Divisor, ingrese un entero estrictamente positivo.\n");
    divisor = pedir_entero(divisor);
    if(dividendo < 0){
        printf("Error, debe ingresar en dividendo un entero positivo.\n");
        return 0;
    }
    if(divisor == 0){
        printf("Error, no se puede dividir por cero.\n");
        return 0;
    }else if(divisor < 0){
        printf("Error, ingrese en divisor un entero positivo.\n");
        return 0;
    }
    resultado = division(dividendo,divisor);
    imprimir_resultado(resultado.cociente,resultado.resto,dividendo,divisor);
    return 0;
}
/*
Este programa calcula el resto y conciente entero.
Dividendo, ingrese un entero no negativo.
Ingrese un entero positivo:-19
Divisor, ingrese un entero estrictamente positivo.
Ingrese un entero positivo:3
Error, debe ingresar en dividendo un entero positivo.

Este programa calcula el resto y conciente entero.
Dividendo, ingrese un entero no negativo.
Ingrese un entero positivo:19
Divisor, ingrese un entero estrictamente positivo.
Ingrese un entero positivo:0
Error, no se puede dividir por cero.

Este programa calcula el resto y conciente entero.
Dividendo, ingrese un entero no negativo.
Ingrese un entero positivo:19
Divisor, ingrese un entero estrictamente positivo.
Ingrese un entero positivo:-3
Error, ingrese en divisor un entero positivo.

Dividendo, ingrese un entero no negativo.
Ingrese un entero positivo:19
Divisor, ingrese un entero estrictamente positivo.
Ingrese un entero positivo:3
el Cociente entre 19 y 3 es 6.
el Resto entre 19 y 3 es 1.
*/