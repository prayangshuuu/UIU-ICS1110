#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;

    scanf("%d", &i);
    scanf("%f", &f);
    scanf(" %c", &c);

    printf("The integer value: %d\n", i);
    printf("The floating point value: %f\n", f);
    printf("The character value: %c", c);

    return 0;
}