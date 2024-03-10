#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float pi = 3.14;
    float area, raio;
    printf("Insira o raio: ");
    scanf("%f", &raio);
    area = pi * pow(raio, 2);
    printf("Area = %.2f", area);
}