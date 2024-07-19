#include <stdio.h>

void pedir_array(int m, int a[]){
    int i = 0;
    do{
        printf("Ingrese un estado de tipo int en la posicion %d:",i);
        scanf("%d",&a[i]);
        i++;
    }while(i < m);
}

void imprimir_array(int m, int a[]){
    int i = 0;
    printf("La sumatoria queda definida como:\nSumatoria(");
    do{
        if(i < m - 1){
            printf("%d,",a[i]);
        }else{
            printf("%d) = ",a[i]);
        }
        i++;
    }while(i < m);
}

void imprimir_array_suma(int m, int a[]){
    int i = 0;
    do{
        if(i < m - 1){
            if(a[i] >= 0){
                printf("%d + ",a[i]);
            }else{
                printf("(%d) + ",a[i]);
            }
        }else{
            if(a[i] >= 0){
                printf("%d = ",a[i]);
            }else{
                printf("(%d) = ",a[i]);
            }
        }
        i++;
    }while(i < m);
}

int pedir_tam(int m){
    printf("Ingrese un tamaño de tipo entero positivo:");
    scanf("%d",&m);
    return m;
}

int sumatoria(int m, int a[]){
    int res = 0,i = 0;
    do{
        res = res + a[i];
        i++;
    }while(i < m);
    return res;
}

void imprimir_entero(int r){
    printf("%d.\n",r);
}

int main(){
    int m,res;
    printf("Este programa calcula la suma de todos los elementos de un array.\n");
    m = pedir_tam(m);
    if(m <= 0){
        printf("Error, el tamaño debe ser un entero positivo.\n");
        return 0;
    }
    int a[m];
    pedir_array(m,a);
    res = sumatoria(m,a);
    imprimir_array(m,a);
    imprimir_array_suma(m,a);
    imprimir_entero(res);
    return 0;
}
/*
Este programa calcula la suma de todos los elementos de un array.
Ingrese un tamaño de tipo entero positivo:5
Ingrese un estado de tipo int en la posicion 0:14
Ingrese un estado de tipo int en la posicion 1:-9
Ingrese un estado de tipo int en la posicion 2:0
Ingrese un estado de tipo int en la posicion 3:6
Ingrese un estado de tipo int en la posicion 4:-1
La sumatoria queda definida como:
Sumatoria(14,-9,0,6,-1) = 14 + (-9) + 0 + 6 + (-1) = 10.

Este programa calcula la suma de todos los elementos de un array.
Ingrese un tamaño de tipo entero positivo:0
Error, el tamaño debe ser un entero positivo.
*/