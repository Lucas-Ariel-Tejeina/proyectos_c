#include <stdio.h>

int pedir_entero(char name){
    int x;
    printf("Ingrese un estado de tipo entero que se desee que se guarde en %c:\n",name);
    printf("Ingrese un estado:");
    scanf("%d",&x);
    return x;
}

void imprimir_entero(char name, int x){
    printf("El estado de %c = %d.\n",name,x);
}

char pedir_variable(char t){
    printf("Ingrese una variable:");
    scanf(" %c",&t);
    return t;
}

int main(){
    int w,b,l,k,j,o;
    char m,a,n,h,i,r;
    printf("Este programa busca definir 3 estados de verdad, entendiendose 0 por false y 1 por true.\n");
    printf("La primera expresion es x %% 4 == 0, donde x es la variable asociada.\n");
    printf("Buscaremos guardar la primera expresión en una variable.\n");
    m = pedir_variable(m);
    printf("La primera expresión que buscaremos definir posee una variable asociada.\n");
    a = pedir_variable(a);
    w = pedir_entero(a);
    b = w % 4 == 0;
    printf("La segunda expresion es x + y == 0 && y - x == (-1) * z, donde x ya la definimos anteriormente y donde 'y' e 'z' son variables asociadas.\n");
    printf("Buscaremos guardar la segunda expresión en una variable.\n");
    n = pedir_variable(n);
    printf("Ahora buscaremos insertar una variable que es correspondiente a 'y' de la segunda expresion.\n");
    h = pedir_variable(h);
    l = pedir_entero(h);
    printf("Ahora le pedimos que ingrese una variable, que ocupara el lugar de 'z' en la segunda expresion.\n");
    i = pedir_variable(i);
    j = pedir_entero(i);
    k = (w + l == 0) && (l - w == (-1) * j);
    printf("Por ultimo buscaremos guardar la ultima expresion !( %c && %c) en una variable.\n",m,n);
    r = pedir_variable(r);
    o = !(b && k);
    printf("las expresiones quedan definidas como:\n");
    imprimir_entero(m,b);
    imprimir_entero(n,k);
    imprimir_entero(r,o);
    return 0;
}
/*
Este programa busca definir 3 estados de verdad, entendiendose 0 por false y 1 por true.
La primera expresion es x % 4 == 0, donde x es la variable asociada.
Buscaremos guardar la primera expresión en una variable.
Ingrese una variable:s
La primera expresión que buscaremos definir posee una variable asociada.
Ingrese una variable:a
Ingrese un estado de tipo entero que se desee que se guarde en a:
Ingrese un estado:4
La segunda expresion es x + y == 0 && y - x == (-1) * z, donde x ya la definimos anteriormente y donde 'y' e 'z' son variables asociadas.
Buscaremos guardar la segunda expresión en una variable.
Ingrese una variable:q
Ahora buscaremos insertar una variable que es correspondiente a 'y' de la segunda expresion.
Ingrese una variable:y
Ingrese un estado de tipo entero que se desee que se guarde en y:
Ingrese un estado:-4
Ahora le pedimos que ingrese una variable, que ocupara el lugar de 'z' en la segunda expresion.
Ingrese una variable:z
Ingrese un estado de tipo entero que se desee que se guarde en z:
Ingrese un estado:8
Por ultimo buscaremos guardar la ultima expresion !( s && q) en una variable.
Ingrese una variable:u
las expresiones quedan definidas como:
El estado de s = 1.
El estado de q = 1.
El estado de u = 0.
*/