#include <stdio.h>
#include <stdbool.h>
int main(){
    int x,i = 2;
    bool res = true;
    printf("Ingrese un estado inicial para x:");
    scanf("%d",&x);
    do{
        res = res && (x % i) != 0;
        i++;
    }while(i < x && res);
    if(res){
        printf("No hay ningun numero desde 2 hasta x que divida a x.\n");
    } else {
        printf("Existe al menos un numero que entre 2 y x que divide a x\n");
    }
    return 0;
}
/*
Ingrese un estado inicial para x:5
No hay ningun numero desde 2 hasta x que divida a x.
*/