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

int main(){
    int x, i = 1;
    char m;
    printf("Este programa le pedira que ingrese una variable con un estado donde lo ira reduciendo en 1 hasta tener estado final igual a 0.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    do{
        x = x - 1;
        printf("Iteracion %d, estado de %c = %d.\n",i,m,x);
        i++;
    }while(x != 0);
    imprimir_entero(m,x);
return 0;    
}
/*
Este programa le pedira que ingrese una variable con un estado donde lo ira reduciendo en 1 hasta tener estado final igual a 0.
Ingrese una variable:q
Ingrese un estado de tipo entero que se desee que se guarde en q:
Ingrese un estado:4
Iteracion 1, estado de q = 3.
Iteracion 2, estado de q = 2.
Iteracion 3, estado de q = 1.
Iteracion 4, estado de q = 0.
El estado de q = 0.
*/