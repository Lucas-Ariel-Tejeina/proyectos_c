#include <stdio.h>
#include <assert.h>

char pedir_variable(char n){
    printf("Introduzca una variable de tipo char:");
    scanf(" %c",&n);
    return n;
}

int pedir_entero(char n){
    int x;
    printf("Introduzca un estado para la variable %c:",n);
    scanf("%d",&x);
    return x;
}

void imprimir_entero(char m, int a){
    printf("El valor absoluto de %c es %d.\n",m,a);
}

int main(){
    int x;
    char m;
    printf("Este programa busca calcula el valor absoluto de un estado asociado a una variable.\n");
    m = pedir_variable(m);
    x = pedir_entero(m);
    assert(x == x);
    if(x >= 0){
        x = x;
    }else{
        x = -x;
    }
    assert(x == x || x == -x);
    imprimir_entero(m,x);
    return 0;
}
/*
Queremos carcular el valor absoluto de un número.

Var x, res : Int;
{P: true}
S
{Q: res = |x|}

Veamos si podemos definir a S como una asignación.
Sea S : res := E.
Definimos la wp como:
wp.(res = E).(res = |x|)
{Def de wp para la asignación}
E = |x|.

No podemos definir E, por lo tanto necesitamos un análisis por casos

caso 1) x >= 0
{Def de módulo}
E = x
{Tomamos E = x}
True.

caso 2) x < 0
{Def de módulo}
E = -x
{Tomamos E = -x}
True.

Por lo tanto nuestro programa queda definido como:

Var x, res : Int;
{P: true}
if x >= 0 ->
    res := x
[] x < 0  ->
    res := -x
{Q: res = |x|}
*/
/*
Este programa busca calcula el valor absoluto de un estado asociado a una variable.
Introduzca una variable de tipo char:q
Introduzca un estado para la variable q:-69
El valor absoluto de q es 69.
*/