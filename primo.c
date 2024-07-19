#include <stdio.h>
#include <stdbool.h>

int pedir_entero(int m){
    printf("Ingrese un entero positivo:");
    scanf("%d",&m);
    return m;
}

bool es_primo(int p){
    int i = 2;
    do{
        if(p % i == 0){
            return false;
        }
        i++;
    }while(i < p);
    return true;
}

int nesimo_primo(int N){
    int contador = 0, primo = 2;
    do{
        if(es_primo(primo)){
            contador++;
        }
        primo++;
    }while(contador < N);
    return primo - 1;
}

void imprimir_primo(int p, int m){
    printf("El %d-primo es %d.\n",m,p);
}

int main(){
    int m,p;
    printf("Este programa calcula en nesimo primo.\n");
    m = pedir_entero(m);
    if(m < 0){
        printf("Error, debe ingresar un entero no negativo.\n");
        return 0;
    }
    p = nesimo_primo(m);
    imprimir_primo(p,m);
    return 0;
}