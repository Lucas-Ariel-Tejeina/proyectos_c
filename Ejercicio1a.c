#include <stdio.h> 

int main(){
    int x,y,z,res;
    printf("Ingrese valores de tipo entero para x, y, z:\n");
    printf("Valor para x:");
    scanf("%d", &x);
    printf("Valor para y:");
    scanf("%d", &y);
    printf("valor para z:");
    scanf("%d", &z);
    res = x + y + 1;
    printf("El resultado de %d + %d + 1 = %d.\n", x, y, res);
return 0;
} 

/*
Ingrese valores de tipo entero para x, y, z:
Valor para x:7
Valor para y:3
valor para z:5
El resultado de 7 + 3 + 1 = 11.

Ingrese valores de tipo entero para x, y, z:
Valor para x:1
Valor para y:10
valor para z:8
El resultado de 1 + 10 + 1 = 12.
*/