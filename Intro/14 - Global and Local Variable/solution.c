#include <stdio.h>

int global = 10;

int main()
{
    printf("A. Global: %d\n", global);

    int local = 20;

    printf("B. Local: %d\n", local);
    printf("C. Global: %d", global);

    return 0;
}