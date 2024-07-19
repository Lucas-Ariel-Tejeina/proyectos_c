#include <stdio.h>
#include <assert.h>

char pedir_variable(char n){
    printf("Introduzca una variable de tipo char:");
    scanf(" %c",&n);
    return n;
}

int pedir_entero(char n){
    int x;
    printf("Ingrese un estado a la variable %c:", n);
    scanf("%d",&x);
    return x;
}

void imprimir_resultado(char m, char n, int a){
    printf("El minimo entre %c y %c es %d.\n",m,n,a);
}

int main(){
    int x,y,a;
    char m,n;
    printf("Este programa busca calcular el minimo entre dos estados de dos variables.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    n = pedir_variable(n);
    y = pedir_entero(n);
    assert(x == x && y == y);
    if (x >= y){
        a = y;
    } else {
        a = x;
    };
    assert(a == x || a == y);
    imprimir_resultado(m,n,a);
    return 0;
}

/*
*
Como queremos ver el minimo entre 2 numeros vamos a necesitar 3 variables de tipo Int,
2 de las 3 variables serán las que se comparen y la otra variable libre adoptara el 
minimo entre las dos primeras.

*

Var x,y,res : Int;
[P : x = X ∧ y = Y]
S
[Q : res = x min y]

*
Como queremos calcular el minimo entre dos numeros vamos a necesitar un análisis por casos
donde x >= y ó x < y.
Tratemos de deducir esto ultimo, supongamos que S es una asignación.
S va a ser una asignación de res, por lo tanto será res := E, tal que E = x min y donde E
es una incognita.
La terna P -> Wp.S.Q vale, suponemos como hipotésis P: x = X ∧ y = Y.
Entonces

wp.(res := E).(res = X min Y)
{Def de wp para la asignación}
E = X min Y.

No podemos definir un valor especifico para E, por lo tanto debemos realizar un análisis 
por casos.

caso 1) x >= y 
{por def de min}
E = y
{Tomo E = y}
True.

caso 2) x < y
{por def de min}
E = x
{Tomo E = x}
True

por lo tanto nuestro programa queda definido como 

Var x,y,res : Int;
[P : x = X ∧ y = Y]
if x >= y ->
        res := y
[] x < y  ->
        res := x
fi
[Q : res = x min y]


*
*/
/*
Este programa busca calcular el minimo entre dos estados de dos variables.
Introduzca una variable de tipo char:q
Ingrese un estado a la variable q:15
Introduzca una variable de tipo char:w
Ingrese un estado a la variable w:3
El minimo entre q y w es 3.
*/