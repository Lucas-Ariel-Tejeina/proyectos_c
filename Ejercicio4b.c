#include <stdio.h>
int main(){
    int x,y,z,m;
    printf("Ingrese valores para las varaibles x,y,z y m:\n");
    printf("Valor para x:");
    scanf("%d",&x);
    printf("Valor para y:");
    scanf("%d",&y);
    printf("Valor para z:");
    scanf("%d",&z);
    printf("Valor para m:");
    scanf("%d",&m);
    if(x < y){
        m = x;
    } else {
        m = y;
    };
    printf("El estado intermedio de las variables son x = %d, y = %d, z = %d y m = %d.\n",x,y,z,m);
    if(m < z){

    }else {
        m = z;
    };
    printf("El estado final de las variables queda como x = %d, y = %d, z = %d y m = %d.\n",x,y,z,m);
}
/*
Ingrese valores para las varaibles x,y,z y m:
Valor para x:5
Valor para y:4
Valor para z:8
Valor para m:0
El estado intermedio de las variables son x = 5, y = 4, z = 8 y m = 4.
El estado final de las variables queda como x = 5, y = 4, z = 8 y m = 4.

Ingrese valores para las varaibles x,y,z y m:
Valor para x:1
Valor para y:2
Valor para z:3
Valor para m:4
El estado intermedio de las variables son x = 1, y = 2, z = 3 y m = 1.
El estado final de las variables queda como x = 1, y = 2, z = 3 y m = 1.

Este programa busca asignarle a la variable m el estado mas chico de las variables.
En el primer if se busca que m adopte el estado mas chico entre x e y.
En el segundo if se busca que m adopte el estado mas chico entre m y z.
Por lo tanto m adopta el estado mas chico entre x,y,z independientemente del estado 
inicial de m.
*/