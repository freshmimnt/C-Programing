#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura, area, perimetro;

    printf("Insira a altura: ");
    scanf("%d", &altura);
    printf("Insira a base: ");
    scanf("%d", &base);
    area = base * altura;
    perimetro = 2 * (base + altura);
    printf("Area = %d e Perimetro = %d", area, perimetro);
}