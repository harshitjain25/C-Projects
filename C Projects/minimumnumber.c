#include<stdio.h>
int main()
{
    int i,n=10,min,no;
    for(i=1;i<=n;i++)
    {
        printf("\n Enter a no.");
        scanf("%d",&no);
        if(no<min)
        min=no;
    }
    printf("\nminimum no.=%d",min);
    return 0;

}