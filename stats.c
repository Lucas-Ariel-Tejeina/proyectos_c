#include <stdio.h>

struct datos_t {
float maximo;
float minimo;
float promedio;
};

struct datos_t stats(int tam, float a[]){
    int i = 0;
    struct datos_t resultado = {a[0],a[0],a[0]};
    do{
        if(a[i] < a[i+1]){
            resultado.maximo = a[i+1];
        }else if(a[i+1] < a[i]){
            resultado.minimo = a[i+1];
        }
        resultado.promedio = resultado.promedio + a[i+1];
        i++;
    }while(i < tam - 1);
    resultado.promedio = resultado.promedio/tam;
    return resultado;
}

void pedir_array(int tam, float a[]){
    int i = 0;
    printf("Ingrese los elementos de array.\n");
    do{
        printf("Posicion %d: ",i);
        scanf("%f",&a[i]);
        i++;
    }while(i < tam);
}

int pedir_entero(int tam){
    printf("Ingrese un entero: ");
    scanf("%d",&tam);
    return tam;
}

void imprimir_resultado(float max, float min, float pro){
    printf("El maximos del array es %f.\n",max);
    printf("El minimo del array es %f.\n",min);
    printf("El valor promedio del array es %f.\n",pro);
}

int main(){
    int tam;
    struct datos_t resultado;
    printf("El programa calcula el minimo, el maximo, y el promedio de un arreglo no vacio de numeros flotantes.\n");
    printf("Tamaño del array.\n");
    tam = pedir_entero(tam);
    if(tam <= 0){
        printf("Error, el tamaño debe ser un entero positivo.\n");
        return 0;
    }
    float a[tam];
    pedir_array(tam,a);
    resultado = stats(tam,a);
    imprimir_resultado(resultado.maximo,resultado.minimo,resultado.promedio);
    return 0;
}
/*
El programa calcula el minimo, el maximo, y el promedio de un arreglo no vacio de numeros flotantes.
Tamaño del array.
Ingrese un entero: 5
Ingrese los elementos de array.
Posicion 0: 5.6
Posicion 1: 4.4
Posicion 2: 3.0
Posicion 3: 2.0
Posicion 4: 1.0
El maximos del array es 5.600000.
El minimo del array es 1.000000.
El valor promedio del array es 3.200000.

El programa calcula el minimo, el maximo, y el promedio de un arreglo no vacio de numeros flotantes.
Tamaño del array.
Ingrese un entero: 0
Error, el tamaño debe ser un entero positivo.
*/