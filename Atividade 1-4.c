// Faça um programa em Linguagem C que calcule e mostre a área de um circulo. Sabe-se que: Área = ?.R2

#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo eh: %f\n", area);

    return 0;
}

