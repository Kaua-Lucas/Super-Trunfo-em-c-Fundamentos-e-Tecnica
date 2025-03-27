#include <stdio.h>

int main()
{
    int semSinal = 30000000000;
    //unsigned int comSinal = 30000000000;
    unsigned long long int comSinal = 30000000000;
    long double comSinal1 = 3.144244241312212312312;

    printf("sem sinal: %d.\n", semSinal);
    //printf("com sinal: %u",comSinal);
    printf("com sinal: %lld",comSinal);

    printf("\ncom sinal: %.21lf",comSinal1);
    return 0;
}