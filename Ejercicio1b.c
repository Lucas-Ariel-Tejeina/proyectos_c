#include <stdio.h>

int main(){
    int x,y,z,res;
    printf("Ingrese valores enteros para x , y , z.\n");
    printf("Ingrese un valor para x:");
    scanf("%d", &x);
    printf("Ingrese un valor para y:");
    scanf("%d",&y);
    printf("Ingrese un valor para z:");
    scanf("%d",&z);
    res = z * z + y * 45 - 15 * x;
    printf("El resultado %d * %d + %d * 45 - 15 * %d = %d.\n",z,z,y,x,res);
    return 0;
}

/*
Ingrese valores enteros para x , y , z.
Ingrese un valor para x:7
Ingrese un valor para y:3
Ingrese un valor para z:5
El resultado 5 * 5 + 3 * 45 - 15 * 7 = 55.

Ingrese valores enteros para x , y , z.
Ingrese un valor para x:1
Ingrese un valor para y:10
Ingrese un valor para z:8
El resultado 8 * 8 + 10 * 45 - 15 * 1 = 499.
*/