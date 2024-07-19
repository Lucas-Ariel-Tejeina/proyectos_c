#include <stdio.h>
int main(){
    int x;
    printf("Ingrese un estado para x:");
    scanf("%d",&x);
    do{
        x = 0;
    }while(x != 0);
    printf("El estado de x = %d.\n",x);
    return 0 ;
}
/*
Ingrese un estado para x:400
El estado de x = 0.
*/