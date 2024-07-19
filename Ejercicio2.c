#include <stdio.h>
#include <stdbool.h>

int main(){
    int x,y,z;
    bool w,b,res;
    printf("Ingrese un valor para x,y,z:\n");
    printf("Ingrese un valor para x:");
    scanf("%d",&x);
    printf("Ingrese un valor para y:");
    scanf("%d",&y);
    printf("Ingrese un valor para z:");
    scanf("%d",&z);
    printf("Definimos una variable b = x %% 4 == 0.\n");
    b = x % 4 == 0;
    printf("Definimos una w = x + y == 0 && y - x == (-1) * z.\n");
    w = x + y == 0 && y - x == (-1) * z;
    res = !((x % 4 == 0) && (x + y == 0 && y - x == (-1) * z));
    if(b){
        printf("El valor de verdad de b es verdadero.\n");
    }else{
        printf("El valor de verdad de b es falso.\n");
    }
    if(w){
        printf("El valor de verdad de w es verdadero.\n");
    }else{
        printf("El valor de verdad de w es falso.\n");
    }
    if(res){
        printf("El valor de verdad de not b && w es verdadero.\n");
    }else{
        printf("El valor de verdad de not b && w es falso.\n");
    }
    return 0;
}
/*
Ingrese un valor para x,y,z:
Ingrese un valor para x:4
Ingrese un valor para y:-4
Ingrese un valor para z:8
Definimos una variable b = x % 4 == 0.
Definimos una w = x + y == 0 && y - x == (-1) * z.
El valor de verdad de b es verdadero.
El valor de verdad de w es verdadero.
El valor de verdad de not b && w es falso.
*/