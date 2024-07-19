#include <stdio.h>
#include <limits.h>

struct minimo {
int minpar;
int minimpar;
};


int minimo_pares(int tam, int a[]){
    int min = INT_MAX,i = 0;
    do{
        if(min > a[i] && a[i] % 2 == 0){
            min = a[i];
        }
        i++;
    }while(i < tam);
    return min;
}
int minimo_impares(int tam, int a[]){
    int min = INT_MAX,i = 0;
        do{
           if(min > a[i] && a[i] % 2 != 0){
              min = a[i];
          }
          i++;
    }while(i < tam);
    return min;
}

struct minimo qsy(int tam, int a[]){
    struct minimo resultado;
    resultado.minimpar = minimo_impares(tam,a);
    resultado.minpar = minimo_pares(tam,a);
    return resultado;
}

int pedir_entero(int m){
    printf("Ingrese un entero:");
    scanf("%d",&m);
    return m;
}

void pedir_array(int tam, int a[]){
    int i = 0;
    printf("Ingrese los elementos del array.\n");
    do{
        printf("Posicion %d:",i);
        scanf("%d",&a[i]);
        i++;
    }while(i < tam);
}

void minimodefinitivo(int m,int n){
    printf("El minimo entre %d y %d es ",m,n);
    if(m < n){
        printf("%d.\n",m);
    }else{
        printf("%d.\n",n);
    }
}

int main(){
    int max = INT_MAX,m,min;
    struct minimo resultado;
    printf("Este programa busca calcular el minimo impar y minimo par de un array.\n");
    printf("ingrese el tamaño del array.\n");
    m = pedir_entero(m);
    if(m <= 0){
        printf("Error, el tamaño debe ser un entero positivo.\n");
        return 0;
    }
    int a[m];
    pedir_array(m,a);
    resultado = qsy(m,a);
    if(resultado.minimpar == max){
        printf("El minimo par es %d.\n",resultado.minpar);
        printf("Como el array solo posee elementos pares, no hay un minimo de impares.\n");
    }else if(resultado.minpar == max){
        printf("El minimo impar es %d.\n",resultado.minimpar);
        printf("Como el array solo posee elementos impares, no hay un minimo de pares.\n");
    }else{
        printf("El minimo par es %d.\n",resultado.minpar);
        printf("El minimo impar es %d.\n",resultado.minimpar);
        minimodefinitivo(resultado.minimpar,resultado.minpar);
    }
    return 0;
}
/*
Este programa busca calcular el minimo impar y minimo par de un array.
ingrese el tamaño del array.
Ingrese un entero:5
Ingrese los elementos del array.
Posicion 0:8
Posicion 1:6
Posicion 2:4
Posicion 3:2
Posicion 4:0
El minimo par es 0.
Como el array solo posee elementos pares, no hay un minimo de impares.

Este programa busca calcular el minimo impar y minimo par de un array.
ingrese el tamaño del array.
Ingrese un entero:5
Ingrese los elementos del array.
Posicion 0:9
Posicion 1:7
Posicion 2:5
Posicion 3:3
Posicion 4:1
El minimo impar es 1.
Como el array solo posee elementos impares, no hay un minimo de pares.

Este programa busca calcular el minimo impar y minimo par de un array.
ingrese el tamaño del array.
Ingrese un entero:5
Ingrese los elementos del array.
Posicion 0:5
Posicion 1:4
Posicion 2:3
Posicion 3:2
Posicion 4:1
El minimo par es 2.
El minimo impar es 1.
El minimo entre 1 y 2 es 1.

Este programa busca calcular el minimo impar y minimo par de un array.
ingrese el tamaño del array.
Ingrese un entero:0
Error, el tamaño debe ser un entero positivo.
*/