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
    int x,y,a,b;
    char m,n;
    printf("Este programa actualiza el estado final de las variables de la siguiente forma:\n");
    printf("La primera varibale es su estado inicial mas uno.\n");
    printf("La segunda varibale es su estado inicial mas el estado inicial de la segunda varibale.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    n = pedir_variable(n);
    y = pedir_entero(n);
    a = x;
    b = y;
    assert(a == x);
    x = a + 1;
    y = a + b;
    assert(x == a + 1 && y == a + b);
    imprimir_entero_y_char(m,x);
    imprimir_entero_y_char(n,y);
    return 0;
    
}
/*
Este programa actualiza el estado final de las variables de la siguiente forma:
La primera varibale es su estado inicial mas uno.
La segunda varibale es su estado inicial mas el estado inicial de la segunda varibale.
Ingrese una variable de tipo char: q
Ingrese un estado a q: 1
Ingrese una variable de tipo char: w
Ingrese un estado a w: 2
El estado de q es 2.
El estado de w es 3.
*/

//--------------------------------------------------------------------------------------------------

/*
Var x,y,a : Int;
Const X,Y : Int;
{P: x = X && y = Y && a = X}
x:= a + 1
y:= a + y
{Q: x = X + 1 && y = X + Y}
*/