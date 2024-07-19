#include <stdio.h>
int main(){
    int x,y,i = 0;
    printf("Ingrese estados iniciales:\n");
    printf("Para x:");
    scanf("%d",&x);
    printf("para y:");
    scanf("%d",&y);
    do{
        x = x - y;
        i = i + 1;
        printf("El estado de las variables luego de la interacion %d, es x = %d, y = %d.\n",i,x,y);
    }while(x >= y);
    return 0;
}
/*
Ingrese estados iniciales:
Para x:13
para y:3
El estado de las variables luego de la interacion 1, es x = 10, y = 3.
El estado de las variables luego de la interacion 2, es x = 7, y = 3.
El estado de las variables luego de la interacion 3, es x = 4, y = 3.
El estado de las variables luego de la interacion 4, es x = 1, y = 3.
*/