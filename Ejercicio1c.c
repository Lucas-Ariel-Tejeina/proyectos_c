#include <stdio.h>
#include <stdbool.h>

int main(){
    int x,y,z;
    bool res;
    printf("Ingrese valores enteros para x , y , z.\n");
    printf("Ingrese un valor para x:");
    scanf("%d", &x);
    printf("Ingrese un valor para y:");
    scanf("%d",&y);
    printf("Ingrese un valor para z:");
    scanf("%d",&z);
    res = (y - 2 == (x * 3 + 1) % 5);
    if(res){
        printf("El resultado %d - 2 == (%d * 3 + 1) %% 5 es verdadera.\n",y,x);
    }else{
        printf("El resultado %d - 2 == (%d * 3 + 1) %% 5 es falso.\n",y,x);
    }
    return 0;
}

/*
Ingrese valores enteros para x , y , z.
Ingrese un valor para x:7
Ingrese un valor para y:3
Ingrese un valor para z:5
El resultado 3 - 2 == (7 * 3 + 1) % 5 es falso.

Ingrese valores enteros para x , y , z.
Ingrese un valor para x:1
Ingrese un valor para y:10
Ingrese un valor para z:8
El resultado 10 - 2 == (1 * 3 + 1) / 5 es falso..
*/
