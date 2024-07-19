#include <stdio.h>

int suma_hasta(int n){
    n = n*(n+1)/2;
    return n;
}

int pedir_entero(int n){
    printf("Ingrese un estado de tipo int:");
    scanf("%d",&n);
    return n;
}   

void imprimir_resultado(int m,int n){
    printf("El resultado de la suma desde 1 hasta %d es %d.\n",m,n);
}

int main(){
    int n,m;
    printf("Este programa calcula la suma de todos los numeros desde el 1 hasta un numero dado.\n");
    n = pedir_entero(n);
    m = n;
    if (n > 0){
        n = suma_hasta(n);
    }else{
        printf("Error, debe ingresar un estado entero positivo.\n");
    }
    imprimir_resultado(m,n);
    return 0;
}
/*
Este programa calcula la suma de todos los numeros desde el 1 hasta un numero dado.
Ingrese un estado de tipo int:7
El resultado de la suma desde 1 hasta 7 es 28.
*/