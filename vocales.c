#include <stdio.h>
#include <stdbool.h>

bool es_vocal(char m){
    bool res;
    char a,A,e,E,i,I,o,O,u,U;
    res = 'a' == m || 'A' == m || 'e' == m || 'E' == m || 'i' == m || 'I' == m || 'o' == m || 'O' == m || 'u' == m || 'U' == m;
    return res;
}

char pedir_char(char m){
    printf("Ingrese un char:");
    scanf(" %c",&m);
    return m;
}

int main(){
    char m;
    bool res;
    printf("Este programa busca saber si el char ingresado es una vocal o no.\n");
    m = pedir_char(m);
    res = es_vocal(m);
    if(res){
        printf("El char %c es vocal.\n",m);
    }else{
        printf("El char %c no es vocal.\n",m);
    }
    return 0;
}

/*
Este programa busca saber si el char ingresado es una vocal o no.
Ingrese un char:a
El char a es vocal.

Este programa busca saber si el char ingresado es una vocal o no.
Ingrese un char:x
El char x no es vocal.
*/