#include <stdio.h>
int main()
{
    int i, N;
    printf("enter the no.\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i = i + 1)
    {
        printf("3 * %d = %d\n", i, 3 * i);
    }
    return 0;
}