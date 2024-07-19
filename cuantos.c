#include <stdio.h>

struct comp_t {
int menores;
int iguales;
int mayores;
};

struct comp_t cuantos(int tam, int a[], int elem){
    struct comp_t resultado = {0,0,0};
    int i = 0;
    do{
        if(a[i] == elem){
            resultado.iguales++;
        }else if(a[i] < elem){
            resultado.menores++;
        }else{
            resultado.mayores++;
        }
        i++;
    }while(i < tam);
    return resultado;
}

void pedir_array(int tam, int a[]){
    int i = 0;
    printf("Ingrese los elementos de array.\n");
    do{
        printf("Posicion %d: ",i);
        scanf("%d",&a[i]);
        i++;
    }while(i < tam);
}

int pedir_entero(int tam){
    printf("Ingrese un entero: ");
    scanf("%d",&tam);
    return tam;
}

void imprimir_resultado(int c, int t, int r, int elem){
    printf("La cantidad de elementos que son iguales a %d es %d.\n",elem,c);
    printf("La cantidad de elementos que son menores a %d es %d.\n",elem,t);
    printf("La cantidad de elementos que son mayores a %d es %d.\n",elem,r);
}

int main(){
    int tam,aw;
    struct comp_t resultado;
    printf("Este programa busca calcular cuantos elementos del array son\nmenores, iguales y mayores a un numero dado.\nTamaño del array.\n");
    tam = pedir_entero(tam);
    if(tam <= 0){
        printf("Error, el tamaño debe ser un entero positivo.\n");
        return 0;
    }
    int a[tam];
    pedir_array(tam,a);
    printf("Ingrese un entero con que quiere hacer la comparacion.\n");
    aw = pedir_entero(aw);
    resultado = cuantos(tam,a,aw);
    imprimir_resultado(resultado.iguales,resultado.menores,resultado.mayores,aw);
    return 0;
}
/*
Este programa busca calcular cuantos elementos del array son
menores, iguales y mayores a un numero dado.
Tamaño del array.
Ingrese un entero: 5
Ingrese los elementos de array.
Posicion 0: 1
Posicion 1: 2
Posicion 2: 3
Posicion 3: 4
Posicion 4: 5
Ingrese un entero con que quiere hacer la comparacion.
Ingrese un entero: 5
La cantidad de elementos que son iguales a 5 es 1.
La cantidad de elementos que son menores a 5 es 4.
La cantidad de elementos que son mayores a 5 es 0.

Este programa busca calcular cuantos elementos del array son
menores, iguales y mayores a un numero dado.
Tamaño del array.
Ingrese un entero: 0
Error, el tamaño debe ser un entero positivo.
*/