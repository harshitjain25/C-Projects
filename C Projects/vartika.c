#include <stdio.h>
void main()
{
    int n,t,fh,h,th,fif,tw,ten,five,two,one;
    
    printf("enter the value");
    scanf("%d",&n);
    t=n/2000;
    fh=n%2000/500;
    th=n%2000%500/200;
    h=n%2000%500%200/100;
    fif=n%2000%500%200%100/50;
    tw=n%2000%500%200%100/20;
    ten=n%2000%500%200%100%50%20/10;
    five=n%2000%500%200%100%50%20%10/5;
    two=n%2000%500%200%100%50%20%10%5/2;
    one=n%2000%500%200%100%50%20%10%5%2/1;
    printf("\nno of t t notes %d",t);
    printf("\nno of fh notes %d",fh);
    printf("\nno of th notes %d",th);
    printf("\nno of h notes %d",h);
    printf("\nno of fif notes %d",fif);
    printf("\nno of tw notes %d",tw);
    printf("\nno of ten notes %d",ten);
    printf("\nno of five notes %d",five);
    printf("\nno of two notes %d",two);
    printf("\nno of one notes %d",one);
}