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

int main(){
    int m;
    char n;
    printf("Ingrese una variables de tipo char:");
    scanf(" %c",&n);
    m = perdir_entero(n);
    imprimir_entero(n,m);
    return 0;
}