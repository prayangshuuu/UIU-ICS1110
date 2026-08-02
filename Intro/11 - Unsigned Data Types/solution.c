#include <stdio.h>

int main()
{
    unsigned int ui = 4294967295U;
    unsigned long int uli = 4294967295UL;
    unsigned long long int ulli = 18446744073709551615ULL;
    unsigned short int usi = 65535;

    printf("The unsigned int value: %u\n", ui);
    printf("The unsigned long int value: %lu\n", uli);
    printf("The unsigned long long int value: %llu\n", ulli);
    printf("The unsigned short int value: %hu", usi);

    return 0;
}