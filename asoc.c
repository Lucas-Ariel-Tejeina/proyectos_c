#include <stdio.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;
struct asoc {
clave_t clave;
valor_t valor;
};

bool asoc_existe(int tam, struct asoc a[], clave_t c){
    int i = 0;
    do{
        if(c == a[i].clave){
            return true;
        }
        i++;
    }while(i < tam);
    return false;
}

void pedir_array(int tam, struct asoc a[]){
    int i = 0;
    printf("Ingrese los elementos del array.\n");
    do{
        printf("Clave en la posicion %d: ",i);
        scanf(" %c",&a[i].clave);
        printf("Valor asociado a la clave: ");
        scanf("%d",&a[i].valor);
        i++;
    }while(i < tam);
}

int pedir_entero(int tam){
    printf("Ingrese un entero positivo: ");
    scanf("%d",&tam);
    return tam;
}

char pedir_clave(char cla){
    printf("Ingrese una clave con que comparar: ");
    scanf(" %c",&cla);
    return cla;
}

void imprimir_bool(bool res, char cla){
    if(res){
        printf("La clave %c existe en el array.\n",cla);
    }else{
        printf("La clave %c no existe en el array.\n",cla);
    }
}

int main(){
    int tam;
    char cla;
    bool resultado;
    printf("Este programa determina si la clave ingresada pertenece o no al array.\n");
    tam = pedir_entero(tam);
    if(tam <= 0){
        printf("Error, debe ingresar un entero positivo.\n");
        return 0;
    }
    struct asoc a[tam];
    pedir_array(tam,a);
    cla = pedir_clave(cla);
    resultado = asoc_existe(tam,a,cla);
    imprimir_bool(resultado,cla);
    return 0;
}
/*
Este programa determina si la clave ingresada pertenece o no al array.
Ingrese un entero positivo: 5
Ingrese los elementos del array.
Clave en la posicion 0: e
Valor asociado a la clave: 1
Clave en la posicion 1: q
Valor asociado a la clave: 2
Clave en la posicion 2: w
Valor asociado a la clave: 3
Clave en la posicion 3: r
Valor asociado a la clave: 4
Clave en la posicion 4: t
Valor asociado a la clave: 5
Ingrese una clave con que comparar: a
La clave a no existe en el array.

Este programa determina si la clave ingresada pertenece o no al array.
Ingrese un entero positivo: 5
Ingrese los elementos del array.
Clave en la posicion 0: q
Valor asociado a la clave: 1
Clave en la posicion 1: w
Valor asociado a la clave: 2
Clave en la posicion 2: e
Valor asociado a la clave: 3
Clave en la posicion 3: r
Valor asociado a la clave: 4
Clave en la posicion 4: t
Valor asociado a la clave: 5
Ingrese una clave con que comparar: e
La clave e existe en el array.

Este programa determina si la clave ingresada pertenece o no al array.
Ingrese un entero positivo: 0
Error, debe ingresar un entero positivo.
*/