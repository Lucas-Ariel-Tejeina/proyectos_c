#include <stdio.h>

int perdir_entero(void){
    int x;
    printf("Ingrese un estado de tipo entero que desee que se muestre por pantalla:\n");
    printf("Ingrese un estado:");
    scanf("%d",&x);
    return x;
}

void imprimir_entero(int x){
    printf("El estado es %d.\n",x);
}

int main(){
    int m;
    m = perdir_entero();
    imprimir_entero(m);
    return 0;
}
/*
Ingrese un estado de tipo entero que desee que se muestre por pantalla:
Ingrese un estado:23
El estado es 23.
*/