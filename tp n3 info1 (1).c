//Alumno: Tiago David Garibay Solis
//Curso: 1R1
//Legajo: 410431
#include <stdio.h>

int main(void) {
    float peso;
    float altura;
    
    printf("ingrese su peso:");
    scanf("%f", &peso);
    printf("ingrese su altura:");
    scanf("%f", &altura);
    
    float imc; //medida de base corporal
    
    imc=peso/ (altura * altura);
    printf ("Su índice de masa corporal es:%.2f\n", imc);
    printf("\nÍndice        | Condición\n");
    printf("----------------------------\n");
    printf("<18.5         | Bajo peso\n");
    printf("18.5 a 24.9   | Normal\n");
    printf("25.0 a 29.9   | Sobrepeso\n");
    printf(">=30.0        | Obesidad\n");
    printf("\nUsted se encuentra en la categoría: ");
    //CONDICIÓN
    if (imc < 18.5) {
        printf("Bajo peso\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Normal\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }

    
    return 0;
}