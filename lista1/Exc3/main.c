#include <stdio.h>
#include <stdlib.h>

int main()
{
    float product;

    printf("Insert the price: ");
    scanf("%f", &product);
    float discount = product * 0.25;
    printf("The final value is: %f", discount);
}