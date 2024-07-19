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
    printf("Este programa calcula la suma de dos variables de tipo int + 1:\n");
    m = pedir_variable(m);
    x = perdir_entero(m);
    n = pedir_variable(n);
    y = perdir_entero(n);
    printf("Ingrese una variable donde se guarde el estado del resultado:\n");
    r = pedir_variable(r);
    res = x + y + 1;
    imprimir_entero(r,res);
return 0;
} 
/*
Este programa calcula la suma de dos variables de tipo int + 1:
Ingrese una variable:u
Ingrese un estado de tipo entero que se desee que se guarde en u:
Ingrese un estado:47
Ingrese una variable:p
Ingrese un estado de tipo entero que se desee que se guarde en p:
Ingrese un estado:
3
Ingrese una variable donde se guarde el estado del resultado:
Ingrese una variable:r
El estado de r = 51.
*/