#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x3, x4;
    printf("Insert first grade: ");
    scanf("%d", &x1);
    printf("Insert second grade: ");
    scanf("%d", &x2);
    printf("Insert third grade: ");
    scanf("%d", &x3);
    printf("Insert fourth grade: ");
    scanf("%d", &x4);

    int media = (x1 + x2 + x3 + x4) / 4;
    printf("Final Grade: %d", media);
}