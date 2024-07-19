#include <stdio.h>

int pedir_longitud(int m){
    printf("Ingrese el tamaño de la array:");
    scanf("%d",&m);
    return m;
}

void pedir_elemento_del_array(int m, int a[]){
    int i = 0;
    do{
        printf("Ingrese un estado de tipo entero en la posicion %d:",i);
        scanf("%d",&a[i]);
        i++;
    }while(i < m);
}

void imprimir_elementos_del_array(int m, int a[]){
    int i = 0;
    printf("El array queda definido como:\n");
    printf("{");
    do{
        if(i < m - 1){
            printf("%d,",a[i]);
        }else if(i == m - 1){
            printf("%d}\n",a[i]);
        }
            i++;
    }while(i < m);
}

int main(){
    int m;
    printf("Este programa le solicitara que ingrese un tamaño del array y luego cada elemento del mismo para imprimirlo por pantalla.\n");
    m = pedir_longitud(m);
    if(m <= 0){
        printf("Error, el tamaño del array debe ser estrictamente postivo.\n");
        return 0;
    }
    int a[m];
    pedir_elemento_del_array(m,a);
    printf("...\n");
    imprimir_elementos_del_array(m,a);
    return 0;
}
/*
Este programa le solicitara que ingrese un tamaño del array y luego cada elemento del mismo para imprimirlo por pantalla.
Ingrese el tamaño de la array:5
Ingrese un estado de tipo entero en la posicion 0:1
Ingrese un estado de tipo entero en la posicion 1:2
Ingrese un estado de tipo entero en la posicion 2:3
Ingrese un estado de tipo entero en la posicion 3:4
Ingrese un estado de tipo entero en la posicion 4:5
...
El array queda definido como:
{1,2,3,4,5}

Este programa le solicitara que ingrese un tamaño del array y luego cada elemento del mismo para imprimirlo por pantalla.
Ingrese el tamaño de la array:-9
Error, el tamaño del array debe ser estrictamente postivo.

Este programa le solicitara que ingrese un tamaño del array y luego cada elemento del mismo para imprimirlo por pantalla.
Ingrese el tamaño de la array:0
Error, el tamaño del array debe ser estrictamente postivo.
*/