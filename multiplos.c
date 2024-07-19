#include <stdio.h>
#include <stdbool.h>

bool todos_pares(int tam, int a[]){
    bool res = true;
    int i = 0;
    do{
        if(a[i] % 2 != 0){
            return res = false;
        }
        i++;
    }while(i < tam);
    return res;
}


bool existe_multiplo(int m, int tam, int a[]){
    bool res = false;
    int i = 0;
    do{
        if(a[i] % m == 0){
            return res = true;
        }
        i++;
    }while(i < tam);
    return res;
}

void pedir_array(int tam, int a[]){
    int i = 0;
    do{
        printf("Ingrese un int en la posicion %d: ",i);
        scanf("%d",&a[i]);
        i++;
    }while(i < tam);
}

int pedir_entero(int m){
    printf("Ingrese el tamaño del array:");
    scanf("%d",&m);
    return m;
}

int pedirr(int r){
    printf("Ingrese un valor con que desee saber si existe un multiplo:\n");
    scanf("%d",&r);
    return r;
}

int pedir(int n){
    printf("Este programa tiene incoporado dos funciones.\n");
    printf("1)Verifica si todos los elementos del array son pares.\n");
    printf("2)Verifica si existe al menos un elemeto del array es multiplo de algun int dado.\n");
    printf("Ingrese alguna de las opciones (1 o 2):");
    scanf("%d",&n);
    return n;
}

int main(){
    int m,n,r;
    bool res;
    printf("Este programa le solicitara que ingrese una array.\n");
    m = pedir_entero(m);
    if(m <= 0){
        printf("Error, el tamaño debe ser un entero positivo.\n");
        return 0;
    }
    int a[m];
    pedir_array(m,a);
    n = pedir(n);
    if(n == 1){
        res = todos_pares(m,a);
        if(res){
            printf("Todos los elementos de array son pares.\n");
        }else{
            printf("No todos los elementos de array son pares.\n");
        }
    }else if (n == 2){
        r = pedirr(r);
        res = existe_multiplo(r,m,a);
        if(res){
            printf("Existe algun elemento del array que es multiplo de %d.\n",r);
        }else{
            printf("No existe algun elemento del array que es multiplo de %d.\n",r);
        }
    }else{
        printf("Error, debe ingresar 1 o 2.\n");
    }
    return 0;
}
/*
Este programa le solicitara que ingrese una array.
Ingrese el tamaño del array:5
Ingrese un int en la posicion 0: 0
Ingrese un int en la posicion 1: 2
Ingrese un int en la posicion 2: 4
Ingrese un int en la posicion 3: 8
Ingrese un int en la posicion 4: 6
Este programa tiene incoporado dos funciones.
1)Verifica si todos los elementos del array son pares.
2)Verifica si existe al menos un elemeto del array es multiplo de algun int dado.
Ingrese alguna de las opciones (1 o 2):1
Todos los elementos de array son pares.

Este programa le solicitara que ingrese una array.
Ingrese el tamaño del array:5
Ingrese un int en la posicion 0: 0
Ingrese un int en la posicion 1: 1
Ingrese un int en la posicion 2: 4
Ingrese un int en la posicion 3: 6
Ingrese un int en la posicion 4: 8
Este programa tiene incoporado dos funciones.
1)Verifica si todos los elementos del array son pares.
2)Verifica si existe al menos un elemeto del array es multiplo de algun int dado.
Ingrese alguna de las opciones (1 o 2):1
No todos los elementos de array son pares.

Este programa le solicitara que ingrese una array.
Ingrese el tamaño del array:5
Ingrese un int en la posicion 0: 0
Ingrese un int en la posicion 1: 5
Ingrese un int en la posicion 2: 10
Ingrese un int en la posicion 3: 15
Ingrese un int en la posicion 4: 25
Este programa tiene incoporado dos funciones.
1)Verifica si todos los elementos del array son pares.
2)Verifica si existe al menos un elemeto del array es multiplo de algun int dado.
Ingrese alguna de las opciones (1 o 2):2
Ingrese un valor con que desee saber si existe un multiplo:
5
Existe algun elemento del array que es multiplo de 5.

Este programa le solicitara que ingrese una array.
Ingrese el tamaño del array:5
Ingrese un int en la posicion 0: 1
Ingrese un int en la posicion 1: 2
Ingrese un int en la posicion 2: 3
Ingrese un int en la posicion 3: 47
Ingrese un int en la posicion 4: 56
Este programa tiene incoporado dos funciones.
1)Verifica si todos los elementos del array son pares.
2)Verifica si existe al menos un elemeto del array es multiplo de algun int dado.
Ingrese alguna de las opciones (1 o 2):2
Ingrese un valor con que desee saber si existe un multiplo:
5
No existe algun elemento del array que es multiplo de 5.

Este programa le solicitara que ingrese una array.
Ingrese el tamaño del array:5
Ingrese un int en la posicion 0: 2
Ingrese un int en la posicion 1: 69
Ingrese un int en la posicion 2: 8
Ingrese un int en la posicion 3: 1
Ingrese un int en la posicion 4: 3
Este programa tiene incoporado dos funciones.
1)Verifica si todos los elementos del array son pares.
2)Verifica si existe al menos un elemeto del array es multiplo de algun int dado.
Ingrese alguna de las opciones (1 o 2):6
Error, debe ingresar 1 o 2.

Este programa le solicitara que ingrese una array.
Ingrese el tamaño del array:0
Error, el tamaño debe ser un entero positivo.
*/