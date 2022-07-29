#include<stdio.h>
int main()
{
    int i,m,n;
    printf("enter size of first array");
    scanf("%d",&m);
    printf("enter size of second array");
    scanf("%d",&n);
    int a[m],b[n],c[m+n],k=0;
    printf("enter elements of first array...");
    for(i=0;i<m;i++)
    {
        printf("\nenter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("enter elements of second array...");
    for(i=0;i<n;i++)
    {
       printf("\nenter b[%d]",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(i=m;i<m+n;i++,k++)
    {
        c[i]=b[k];

    }
    for(i=0;i<m+n;i++)
    {
     printf("\nc[%d]=%d",i,c[i]);
    }

    return 0;


   
}