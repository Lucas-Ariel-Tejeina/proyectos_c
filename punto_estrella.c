#include <stdio.h>

typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;

float peso_promedio(unsigned int longitud, persona_t arr[]){
    persona_t resultado;
    resultado.peso = arr[0].peso;
    int i = 0;
    do{
        resultado.peso = resultado.peso + arr[i+1].peso;
        i++;
    }while(i < longitud - 1);
    resultado.peso = resultado.peso/longitud;
    return resultado.peso;
};
persona_t persona_de_mayor_edad(unsigned int longitud, persona_t arr[]){
    persona_t resultado = arr[0];
    resultado.edad = arr[0].edad;
    int i = 0;
    do{
        if(arr[i].edad < arr[i+1].edad){
            resultado = arr[i+1];
        }
        i++;
    }while(i < longitud - 1);
    return resultado;
};
persona_t persona_de_menor_altura(unsigned int longitud, persona_t arr[]){
    persona_t resultado = arr[0];
    resultado.altura = arr[0].altura;
    int i = 0;
    do{
        if(arr[i].altura > arr[i+1].altura){
            resultado = arr[i+1];
        }
        i++;
    }while(i < longitud - 1);
    return resultado;
};


int main(){
    float peso;
    printf("Este programa compara los datos de 3 personas, Paola,Luis y Julio.\n");
    persona_t edad,altura;
    persona_t p1 = {.nombre="Paola", .edad=21, .altura=1.85, .peso=75};
    persona_t p2 = {.nombre="Luis", .edad=54, .altura=1.75, .peso=69};
    persona_t p3 = {.nombre="Julio", .edad=40, .altura=1.70, .peso=80};
    unsigned int longitud = 3;
    persona_t arr[] = {p1, p2, p3};
    peso = peso_promedio(longitud,arr);
    printf("El peso promedio de las personas es %f.\n",peso);
    edad = persona_de_mayor_edad(longitud,arr);
    printf("La persona de mayor edad es: %s.\n",edad.nombre);
    altura = persona_de_menor_altura(longitud,arr);
    printf("La persona de menor estatura es: %s\n",altura.nombre);
    return 0;
}
/*
int main(void) {
persona_t p1 = {.nombre="Paola", .edad=21, .altura=1.85, .peso=75};
persona_t p2 = {.nombre="Luis", .edad=54, .altura=1.75, .peso=69};
persona_t p3 = {.nombre="Julio", .edad=40, .altura=1.70, .peso=80};
unsigned int longitud = 3;
persona_t arr[] = {p1, p2, p3};
printf("El peso promedio es %f\n", peso_promedio(longitud, arr));
persona_t p = persona_de_mayor_edad(longitud, arr);
printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
p = persona_de_menor_altura(longitud, arr);
printf("El nombre de la persona con menor altura es %s\n", p.nombre);
return 0;
} 

#include <stdio.h>

#define MAX_LONGITUD_NOMBRE 50 // Tamaño máximo del nombre

typedef struct _persona {
char nombre[MAX_LONGITUD_NOMBRE];
int edad;
float altura;
float peso;
} persona_t;

float peso_promedio(unsigned int longitud, persona_t arr[]){
    persona_t resultado;
    resultado.peso = arr[0].peso;
    int i = 0;
    do{
        resultado.peso = resultado.peso + arr[i+1].peso;
        i++;
    }while(i < longitud - 1);
    resultado.peso = resultado.peso/longitud;
    return resultado.peso;
};
persona_t persona_de_mayor_edad(unsigned int longitud, persona_t arr[]){
    persona_t resultado = arr[0];
    resultado.edad = arr[0].edad;
    int i = 0;
    do{
        if(arr[i].edad < arr[i+1].edad){
            resultado = arr[i+1];
        }
        i++;
    }while(i < longitud - 1);
    return resultado;
};
persona_t persona_de_menor_altura(unsigned int longitud, persona_t arr[]){
    persona_t resultado = arr[0];
    resultado.altura = arr[0].altura;
    int i = 0;
    do{
        if(arr[i].altura > arr[i+1].altura){
            resultado = arr[i+1];
        }
        i++;
    }while(i < longitud - 1);
    return resultado;
};

int pedir_entero(int tam){
    printf("Ingrese un entero positivo:");
    scanf("%d",&tam);
    return tam;
}

void pedir_array(int tam, persona_t a[]){
    int i = 0;
    printf("Ingrese los datos de las personas.\n");
    do{
        printf("Persona %d:\n",i);
        printf("Nombre: ");
        scanf("%s", a[i].nombre);
        printf("Edad: ");
        scanf("%d",&a[i].edad);
        printf("Altura: ");
        scanf("%f",&a[i].altura);
        printf("Peso: ");
        scanf("%f",&a[i].peso);
        i++;
    }while(i < tam);
}

int main(){
    int tam;
    float peso;
    persona_t edad,altura;
    printf("Este programa busca que ingrese los datos de cierto numero de personas,\ncalcular el promedio de peso entre las persona, la estatura mas baja y la edad mas alta.\n");
    printf("Se le solicita que ingrese un numero que representara a las cantidad de personas que comparara.\n");
    tam = pedir_entero(tam);
    if(tam <= 0){
        printf("Error, ingrese un entero positivo.\n");
        return 0;
    }
    unsigned int longitud = tam;
    persona_t a[tam];
    pedir_array(tam,a);
    peso = peso_promedio(tam,a);
    printf("El peso promedio de las personas es %f.\n",peso);
    edad = persona_de_mayor_edad(tam,a);
    printf("La persona de mayor edad es: %s.\n",edad.nombre);
    altura = persona_de_menor_altura(tam,a);
    printf("La persona de menor estatura es: %s.\n",altura.nombre);
    return 0;
}

Este programa busca que ingrese los datos de cierto numero de personas,
calcular el promedio de peso entre las persona, la estatura mas baja y la edad mas alta.
Se le solicita que ingrese un numero que representara a las cantidad de personas que comparara.
Ingrese un entero positivo:3
Ingrese los datos de las personas.
Persona 0:
Nombre: Paola
Edad: 21
Altura: 1.85
Peso: 75
Persona 1:
Nombre: Luis
Edad: 54
Altura: 1.75
Peso: 69
Persona 2:
Nombre: Julio
Edad: 40
Altura: 1.70
Peso: 80
El peso promedio de las personas es 74.666664.
La persona de mayor edad es: Luis.
La persona de menor estatura es: Julio.
*/