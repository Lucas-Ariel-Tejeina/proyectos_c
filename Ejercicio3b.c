#include <stdio.h>

int main(){
    int x,y;
    printf("Ingrese un valor para x:");
    scanf("%d",&x);
    printf("Ingrese un valor para y:");
    scanf("%d",&y);
    x = x + y;
    y = y + y;
    printf("El valor de x = %d, y el valor de y = %d.\n",x,y);
    return 0;
}
/*
Ingrese un valor para x:1
Ingrese un valor para y:2
El valor de x = 3, y el valor de y = 4.

Ingrese un valor para x:3
Ingrese un valor para y:4
El valor de x = 7, y el valor de y = 8.

Ingrese un valor para x:7
Ingrese un valor para y:8
El valor de x = 15, y el valor de y = 16.
*/