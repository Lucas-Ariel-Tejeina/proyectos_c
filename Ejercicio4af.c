#include <stdio.h>
int main(){
    int x,y;
    printf("Ingrese un valor para x:");
    scanf("%d",&x);
    printf("Ingrese un valor para y:");
    scanf("%d",&y);
    if(x >= y){
        x = 0;
    } else if (x <= y){
        x = 2;
    }
    printf("El valor de la variable x = %d, y la variable y = %d.\n",x,y);
return 0;
}
/*
Ingrese un valor para x:-100
Ingrese un valor para y:1
El valor de la variable x = 2, y la variable y = 1.
*/