#include <stdio.h>

int perdir_entero(char name){
    int x;
    printf("Ingrese un estado de tipo entero que se desee que se guarde en %c:\n",name);
    printf("Ingrese un estado:");
    scanf("%d",&x);
    return x;
}

void imprimir_entero(char name, int x){
    printf("El estado de %c = %d.\n",name,x);
}

int main(){
    int x,y,z,m;
    char o,n,b,v;
    printf("Este programa le solicitará que ingrese 4 variables de tipo char y 4 estados de tipo int:\n");
    printf("Ingrese una variable:");
    scanf(" %c",&o);
    x = perdir_entero(o);
    printf("Ingrese una variable:");
    scanf(" %c",&n);
    y = perdir_entero(n);
    printf("Ingrese una variable:");
    scanf(" %c",&b);
    z = perdir_entero(b);
    printf("Ingrese una variable que tendra el estado mas chico de las varables anteriores:");
    scanf(" %c",&v);
    if(x < y){
        m = x;
    } else {
        m = y;
    };
    printf("El estado intermedio de las variables son %c = %d, %c = %d, %c = %d y %c = %d.\n",o,x,n,y,b,z,v,m);
    if(m < z){

    }else {
        m = z;
    };
    imprimir_entero(o,x);
    imprimir_entero(n,y);
    imprimir_entero(b,z);
    imprimir_entero(v,m);
return 0;
}
/*
Este programa le solicitará que ingrese 4 variables de tipo char y 4 estados de tipo int:
Ingrese una variable:w
Ingrese un estado de tipo entero que se desee que se guarde en w:
Ingrese un estado:9
Ingrese una variable:b
Ingrese un estado de tipo entero que se desee que se guarde en b:
Ingrese un estado:1
Ingrese una variable:u
Ingrese un estado de tipo entero que se desee que se guarde en u:
Ingrese un estado:0
Ingrese una variable que tendra el estado mas chico de las varables anteriores:a
El estado intermedio de las variables son w = 9, b = 1, u = 0 y a = 1.
El estado de w = 9.
El estado de b = 1.
El estado de u = 0.
El estado de a = 0.

---------------------------------------------------------------------------------------------------

¿Qué ventajas encontras en esta nueva versión?
Menos texto de codigo.

---------------------------------------------------------------------------------------------------

¿Podrías escribir alguna otra función en ese ejercicio, cual?
char pedir_variable(char t){
    printf("Ingrese una variable:");
    scanf(" %c",&t);
    return t;
}
---------------------------------------------------------------------------------------------------
¿En qué otros ejercicios de ese Proyecto lo podrías utilizar?
Todas las anteriores, serán los Ejercicio6 y el numero del ejercicio.
*/