#include <stdio.h>

void intercambiar(int tam, int a[], int i, int j){
    int l = 0, c = a[i],d = a[j];
    printf("El intercambio queda definido como:\n{");
    do{
        if(l < tam - 1){
            if(l == i){
                printf("%d,",d);
            }else if(l == j){
                printf("%d,",c);
            }else{
                printf("%d,",a[l]);
            }
        }else{
            if(l == i){
                printf("%d}\n",d);
            }else if(l == j){
                printf("%d}\n",c);
            }else{
                printf("%d}\n",a[l]);
            }
        }
        l++;
    }while(l < tam);
}

void pedir_array(int tam, int a[]){
    int i = 0;
    do{
        printf("Ingrese un int en la posicion %d: ",i);
        scanf("%d",&a[i]);
        i++;
    }while(i < tam);
}

void imprimir_array(int tam, int a[]){
    int i = 0;
    printf("El array queda definido como: {");
    do{
        if(i < tam - 1){
            printf("%d,",a[i]);
        }else{
            printf("%d}",a[i]);
        }
        i++;
    }while(i < tam);
}

int pedir_entero(int n){
    printf("Ingrese un entero:");
    scanf("%d",&n);
    return n;
}

int main(){
    int tam,i,j;
    printf("Este programa intercambiara dos elementos de un array.\n");
    printf("Ingrese un tamaño del array.\n");
    tam = pedir_entero(tam);
    if(tam <= 0){
        printf("Error, el tamaño debe ser un entero positivo.\n");
        return 0;
    }
    int a[tam];
    pedir_array(tam,a);
    imprimir_array(tam,a);
    printf("\nIngrese dos posiciones que desee intercambiar.\nPriemra posicion.\n");
    i = pedir_entero(i);
    printf("Segunda posicion.\n");
    j = pedir_entero(j);
    if(i >= tam){
        printf("Error, la primera posicion excede al array.\n");
        return 0;
    }else if(j >= tam){
        printf("Error, la segunda posicion excede al array.\n");
        return 0;
    }else{
        intercambiar(tam,a,i,j);
    }
    return 0;
}
/*
Este programa intercambiara dos elementos de un array.
Ingrese un tamaño del array.
Ingrese un entero:5
Ingrese un int en la posicion 0: 1
Ingrese un int en la posicion 1: 2
Ingrese un int en la posicion 2: 3
Ingrese un int en la posicion 3: 4
Ingrese un int en la posicion 4: 5
El array queda definido como: {1,2,3,4,5}
Ingrese dos posiciones que desee intercambiar.
Priemra posicion.
Ingrese un entero:2
Segunda posicion.
Ingrese un entero:3
El intercambio queda definido como:
{1,2,4,3,5}

Este programa intercambiara dos elementos de un array.
Ingrese un tamaño del array.
Ingrese un entero:0
Error, el tamaño debe ser un entero positivo.

Este programa intercambiara dos elementos de un array.
Ingrese un tamaño del array.
Ingrese un entero:3
Ingrese un int en la posicion 0: 69
Ingrese un int en la posicion 1: 25
Ingrese un int en la posicion 2: 41
El array queda definido como: {69,25,41}
Ingrese dos posiciones que desee intercambiar.
Priemra posicion.
Ingrese un entero:3
Segunda posicion.
Ingrese un entero:1
Error, la primera posicion excede al array.

Este programa intercambiara dos elementos de un array.
Ingrese un tamaño del array.
Ingrese un entero:3
Ingrese un int en la posicion 0: 85
Ingrese un int en la posicion 1: -69
Ingrese un int en la posicion 2: 0
El array queda definido como: {85,-69,0}
Ingrese dos posiciones que desee intercambiar.
Priemra posicion.
Ingrese un entero:0
Segunda posicion.
Ingrese un entero:3
Error, la segunda posicion excede al array.
*/