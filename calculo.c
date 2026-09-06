#include <stdio.h>

int main() {
    int numero;
    int resultado;

    printf("Por favor, escribe un numero entero: ");
    
    // Aquí el programa se detiene y espera a que escribas algo
    scanf("%d", &numero); 

    resultado = numero * 2;
    printf("El doble de tu numero es: %d\n", resultado);

    return 0;
}

