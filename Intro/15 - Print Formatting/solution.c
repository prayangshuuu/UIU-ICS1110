#include <stdio.h>

int main()
{
    float f;

    scanf("%f", &f);

    printf("(a) Val:%10f\n", f);
    printf("(b) Val:%2f\n", f);
    printf("(c) Val:%.2f\n", f);
    printf("(d) Val:%.0f\n", f);
    printf("(e) Val:%e", f);

    return 0;
}