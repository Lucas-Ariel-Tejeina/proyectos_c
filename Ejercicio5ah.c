#include <stdio.h>
int main(){
    int x;
    printf("Este programa busca reducir a 0 el estado de la variable x:\n");
    printf("Ingrese un estado para x:");
    scanf("%d",&x);
    do{
        x = x - 1;
    }while(x != 0);
    printf("El estado de x = %d.\n",x);
return 0;    
}
/*
Este programa busca reducir a 0 el estado de la variable x:
Ingrese un estado para x:4
El estado de x = 0.
*/