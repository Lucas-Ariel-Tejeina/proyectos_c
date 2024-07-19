#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int pedir_entero(char n){
    int x;
    printf("Ingrese un estado a %c: ",n);
    scanf("%d",&x);
    return x;
}

char pedir_variable(char n){
    printf("Ingrese una variable de tipo char: ");
    scanf(" %c",&n);
    return n;
}

void imprimir_entero_y_char(char n, int x){
    printf("El estado de %c es %d.\n",n,x);
}

int main(){
    int x,y,z,a,b,q;
    char m,n,c;
    printf("Este programa intercambiara los estados de las variables ingresadas.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    n = pedir_variable(n);
    y = pedir_entero(n);
    c = pedir_variable(c);
    z = pedir_entero(c);
    a = x;
    b = y;
    q = z;
    assert(true);
    x = b;
    y = q;
    z = a;
    assert(x == b && y == q && z == a);
    imprimir_entero_y_char(m,x);
    imprimir_entero_y_char(n,y);
    imprimir_entero_y_char(c,z);
    return 0;
}
/*
Queremos definir un programa que realice un intercambio de los estados de las variables.

Var x, y : Int;
{P: x = X ∧ y = Y}
S
{Q: x = Y ∧ y = X}

Veamos si S es una asignacion multiple, tal que S : x = E ∧ y = T.
Tomamos como hipotesis a P : x = X ∧ y = Y, tal que P -> wp.S.Q.

wp.(x = E ∧ y = T).(x = Y ∧ y = X)
{Def de wp para la asignación}
E = Y ∧ T = X
{Tomo E = Y ∧ T = x}
True.

Por lo tanto nuestro programa queda definido como:
Var x, y : Int;
{P: x = X ∧ y = Y}
x,y : Y, X
{Q: x = Y ∧ y = X}


*/
/*
Este programa intercambiara los estados de las variables ingresadas.
Ingrese una variable de tipo char: q
Ingrese un estado a q: 47
Ingrese una variable de tipo char: w
Ingrese un estado a w: -98
Ingrese una variable de tipo char: e
Ingrese un estado a e: 0
El estado de q es -98.
El estado de w es 0.
El estado de e es 47.
*/
/*
Var x,y,z,a : Int;
Conts X,Y,Z : Int;
{P: true}
x,y,z : = X,Y,Z
a = X
x,y,z := Y,Z,a
{Q: x == Y && y == Z && z == X}
*/