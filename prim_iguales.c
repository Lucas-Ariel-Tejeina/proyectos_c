#include <stdio.h>

int prim_iguales(int tam, int a[]){
    int i = 0,cont = 1;
    do{
        if(a[i] == a[i+1]){
            cont++;
        }else{
            return cont;
        }
        i++;
    }while(i < tam - 1);
    return cont;
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

int pedir_tam(int tam){
    printf("Ingrese un tamaño: ");
    scanf("%d",&tam);
    return tam;
}

void imprimir_resultado(int c){
    printf("El tramo inicial mas largo es %d.\n",c);
}

int main(){
    int tam,contador;
    printf("Este programa busca calcular la longuitud del tramo inicial mas largo cuyos elementos son todos iguales.\n");
    tam = pedir_tam(tam);
    if(tam <= 0){
        printf("Error, el tamaño debe ser un entero positivo.\n");
        return 0;
    }
    int a[tam];
    pedir_array(tam,a);
    contador = prim_iguales(tam,a);
    imprimir_resultado(contador);
    return 0;
}
/*
Este programa busca calcular la longuitud del tramo inicial mas largo cuyos elementos son todos iguales.
Ingrese un tamaño: 5
Ingrese los elementos de array.
Posicion 0: 1
Posicion 1: 2
Posicion 2: 3
Posicion 3: 4
Posicion 4: 5
El tramo inicial mas largo es 1.

Este programa busca calcular la longuitud del tramo inicial mas largo cuyos elementos son todos iguales.
Ingrese un tamaño: 5
Ingrese los elementos de array.
Posicion 0: 1
Posicion 1: 1
Posicion 2: 1
Posicion 3: 2
Posicion 4: 3
El tramo inicial mas largo es 3.

Este programa busca calcular la longuitud del tramo inicial mas largo cuyos elementos son todos iguales.
Ingrese un tamaño: 0
Error, el tamaño debe ser un entero positivo.
*/