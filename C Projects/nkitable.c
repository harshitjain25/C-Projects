#include <stdio.h>
int main()
{
    int i, N,n;
    printf("enter a no. of which you want table to be printed:\n");
    scanf("%d",&n);
    printf("enter the no.\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i = i + 1)
    {
        printf("%d * %d = %d\n", n,i, n * i);
    }
    return 0;
}