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
    int x,y,z,res;
    char m,n,b,r;
    printf("Este programa calcula una combinación lineal de las varaibles.\n");
    m = pedir_variable(m);
    x = perdir_entero(m);
    n = pedir_variable(n);
    y = perdir_entero(n);
    b = pedir_variable(b);
    z = perdir_entero(b);
    printf("Ingrese una variables donde se guarde el estado resultante:\n");
    r = pedir_variable(r);
    res = z * z + y * 45 - 15 * x;
    imprimir_entero(r,res);
    return 0;
}
/*
Este programa calcula una combinación lineal de las varaibles.
Ingrese una variable:y
Ingrese un estado de tipo entero que se desee que se guarde en y:
Ingrese un estado:15
Ingrese una variable:c
Ingrese un estado de tipo entero que se desee que se guarde en c:
Ingrese un estado:6
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:3
Ingrese una variables donde se guarde el estado resultante:
Ingrese una variable:r
El estado de r = 54.
*/