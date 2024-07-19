#include <stdio.h>
#include <assert.h>

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
    int x,y,z,X,Y,Z;
    char m,n,c;
    printf("Este programa cambiara el estado de las variables de la siguiente manera:\n");
    printf("El estado de la primera variable tendra el estado inicial de la segunda variable.\n");
    printf("El estado de la segunda variable sera la suma de los estados iniciales de las otras variables junto con la suya.\n");
    printf("El estado de la tercera variable sera la suma de los estados iniciales de la primera y la segunda variable.\n");
    printf("Primera varibale.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    printf("Segunda variable.\n");
    n = pedir_variable(n);
    y = pedir_entero(n);
    printf("Tercera variable.\n");
    c = pedir_variable(c);
    z = pedir_entero(c);
    X = x;
    Y = y;
    Z = z;
    assert(x == X && y == Y && z == Z);
    x = Y;
    y = Y + X + Z;
    z = Y + X;
    assert(x == Y && y == Y + X + Z && z == Y + X);
    imprimir_entero_y_char(m,x);
    imprimir_entero_y_char(n,y);
    imprimir_entero_y_char(c,z);
}

/*
Este programa cambiara el estado de las variables de la siguiente manera:
El estado de la primera variable tendra el estado inicial de la segunda variable.
El estado de la segunda variable sera la suma de los estados iniciales de las otras variables junto con la suya.
El estado de la tercera variable sera la suma de los estados iniciales de la primera y la segunda variable.
Primera varibale.
Ingrese una variable de tipo char: q
Ingrese un estado a q: 59
Segunda variable.
Ingrese una variable de tipo char: w
Ingrese un estado a w: 36
Tercera variable.
Ingrese una variable de tipo char: e
Ingrese un estado a e: -78
El estado de q es 36.
El estado de w es 17.
El estado de e es 95.
*/
/*
Var x,y,z: Int;
Const X,Y,Z : Int;
{P: x = X && y = Y && z = Z}
x:= y
y:= y + x + z
z:= y + x
{Q: x = Y && y = Y + X + Z && z = Y + X}
*/