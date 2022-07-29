#include <stdio.h>
int main()
{
    int n;
    printf("Enter the No.:\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("EVEN NUMBER\n");
    }
    else
    {
        printf("ODD NUMBER\n");
    }
    return 0;
}