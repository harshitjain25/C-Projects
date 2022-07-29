#include <stdio.h>
int main()
{
    int b, a;
    printf("entr nos\n");
    scanf("%d%d", &a, &b);
   // printf("the nos are %d and %d\n", a, b);
    if (b >= a)
    {
        if (b % a == 0)
        {
            printf("not coprime\n");
        }
        if (b % a != 0)
        {
            printf("coprime\n ");
        }
    }
    if (a >= b)
    {
        if (a % b == 0)
        {
            printf("not coprime\n");
        }
        if (a % b != 0)
        {
            printf("coprime\n");
        }
    }
    return (0);
}