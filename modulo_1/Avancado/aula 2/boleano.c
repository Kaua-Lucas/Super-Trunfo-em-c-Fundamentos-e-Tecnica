#include <stdio.h>

int main()
{
    int a = 10 , b = 10.2;
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    if((int) a == b)
    {
        printf("oi");
    }

    return 0;

}