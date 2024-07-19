#include <stdio.h>

int pedir_entero(char name){
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

#include <stdio.h>
int main(){
    int x,y,z,q;
    char m,n,b,c;
    printf("Este programa le solicitara que ingrase 4 variables, donde la ultima variable que se le pedira que ingrese guardara el estado mas chico de las variables.\n");
    printf("Primera variable.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    printf("Segunda variable.\n");
    n = pedir_variable(n);
    y = pedir_entero(n);
    printf("Tercera variable.\n");
    b = pedir_variable(b);
    z = pedir_entero(b);
    printf("cuarta variable.\n");
    c = pedir_variable(c);
    if(x < y){
        q = x;
    } else {
        q = y;
    };
    printf("El estado intermedio de las variables son %c = %d, %c = %d, %c = %d y %c = %d.\n",m,x,n,y,b,z,c,q);
    if(q < z){

    }else {
        q = z;
    };
    imprimir_entero(m,x);
    imprimir_entero(n,y);
    imprimir_entero(b,z);
    imprimir_entero(c,q);
    return 0;
}
/*
Este programa le solicitara que ingrase 4 variables, donde la ultima variable que se le pedira que ingrese guardara el estado mas chico de las variables.
Primera variable.
Ingrese una variable:q
Ingrese un estado de tipo entero que se desee que se guarde en q:
Ingrese un estado:1
Segunda variable.
Ingrese una variable:w
Ingrese un estado de tipo entero que se desee que se guarde en w:
Ingrese un estado:2
Tercera variable.
Ingrese una variable:e
Ingrese un estado de tipo entero que se desee que se guarde en e:
Ingrese un estado:3
cuarta variable.
Ingrese una variable:m
El estado intermedio de las variables son q = 1, w = 2, e = 3 y m = 1.
El estado de q = 1.
El estado de w = 2.
El estado de e = 3.
El estado de m = 1.
*/