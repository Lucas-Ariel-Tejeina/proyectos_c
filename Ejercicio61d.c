#include <stdio.h>

int perdir_entero(char name){
    int x;
    printf("Ingrese un estado de tipo entero que se desee que se guarde en %c:\n",name);
    printf("Ingrese un estado:");
    scanf("%d",&x);
    return x;
}

void imprimir_entero(char name, int x){
    printf("El estado de %c = %d.\n",name,x);
}

char pedir_variable(char t){
    printf("Ingrese una variable:");
    scanf(" %c",&t);
    return t;
}

int main(){
    int x,y,res;
    char m,n,r;
    printf("Este programa calcula el conciente entre una variable y 2, despues se lo multiplica por la otra variable.\n");
    n = pedir_variable(n);
    y = perdir_entero(n);
    m = pedir_variable(m);
    x = perdir_entero(m);
    printf("Ingrese una variable donde desee que se guarde el resultado:\n");
    r = pedir_variable(r);
    res = y / 2 * x;
    imprimir_entero(r,res);
    return 0;
}
/*
Este programa calcula el conciente entre una variable y 2, despues se lo multiplica por la otra variable.
Ingrese una variable:w
Ingrese un estado de tipo entero que se desee que se guarde en w:
Ingrese un estado:8
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:2
Ingrese una variable donde desee que se guarde el resultado:
Ingrese una variable:r
El estado de r = 8.
*/