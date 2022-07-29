#include<stdio.h>
int main()
{
    int n,tt,fh,th,oh,fi,tw,te,f,t,o;
    printf("Enter a amount");
    scanf("%d",&n);
    tt=n/2000;
    fh=n%2000/500;
    th=((n%2000)%500)/200;
    oh=(((n%2000)%500)%200)/100;
    fi=((((n%2000)%500)%200)%100)/50;
    tw=(((((n%2000)%500)%200)%100)%50)/20;
    te=((((((n%2000)%500)%200)%100)%50)%20)/10;
    f=(((((((n%2000)%500)%200)%100)%50)%20)%10)/5;
    t=((((((((n%2000)%500)%200)%100)%50)%20)%10)%5)/2;
    o=(((((((((n%2000)%500)%200)%100)%50)%20)%10)%5)%2)/1;
    printf("\nno. of 2 Thosand rupee notes %d",tt);
    printf("\nno of 5undred rupee notes %d",fh);
    printf("\nno of 2 Hundred rupee notes %d",th);
    printf("\nno of 1 Hundred rupee notes %d",oh);
    printf("\nno of Fifty rupee notes %d",fi);
    printf("\nno of Twenty rupee notes %d",tw);
    printf("\nno of Ten rupee notes %d",te);
    printf("\nno of Five rupee notes %d",f);
    printf("\nno of Two rupee notes %d",t);
    printf("\nno of Onevrupee notes %d",o);

    return 0;
}