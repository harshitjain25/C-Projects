#include<stdio.h>
int main()
{
    int i,n=10,sum=0,no,avg;
    for(i=1;i<=n;i++)
    {
        printf("\n Enter a no.");
        scanf("%d",&no);
        sum=sum+no;
    }    
    avg=sum/10;
    printf("avg of 10 inputs=%d",avg);
    return 0;
}    