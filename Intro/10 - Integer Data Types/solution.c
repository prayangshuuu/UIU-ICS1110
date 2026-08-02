#include <stdio.h>

int main()
{
    long int li = 2147483647;
    long long int lli = 9223372036854775807;
    long double ld = 1.1E+4932L;
    short int si = 32767;

    printf("The long int value: %ld\n", li);
    printf("The long long int value: %lld\n", lli);
    printf("The long double value: %LE\n", ld);
    printf("The short int value: %hd", si);

    return 0;
}