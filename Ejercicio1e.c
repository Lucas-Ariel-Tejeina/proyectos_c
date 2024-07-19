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
    res = y < x * z;
    if(res){
        printf("El resultado %d < %d * %d es verdadero.\n",y,x,z);
    }else{
        printf("El resultado %d < %d * %d es falso.\n",y,x,z);
    }
    return 0;
}
/*
Ingrese valores enteros para x , y , z.
Ingrese un valor para x:7
Ingrese un valor para y:3
Ingrese un valor para z:5
El resultado 3 < 7 * 5 es verdadero.

Ingrese valores enteros para x , y , z.
Ingrese un valor para x:1
Ingrese un valor para y:10
Ingrese un valor para z:8
El resultado 10 < 1 * 8 es falso.

¿En la  ́ultima expresi ́on, que tipo tiene el resultado en lenguaje “C”?
Representa un valor booleano, o sea caracter de verdadero o falso.
*/