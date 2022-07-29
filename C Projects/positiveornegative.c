#include <stdio.h>
int main()
{
    long int n;
    printf("Enter the No.:\n");
    scanf("%ld", &n);
    if (n > 0)
    {
        printf("%ld is a POSITIVE NUMBER\n", n); 
    }
    if (n == 0)
    {
        printf("%ld is a whole no.", n);
    }

    if (n < 0)
    {
        printf("%d is a NEGATIVE NUMBER\n", n);
    }
    return 0;
}