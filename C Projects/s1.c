#include <stdio.h>
void increamentarray(int arr[], int *p,int i)
{
    for (i = 0; i < 4; i++)
    {
        p = &arr[i];
        *p=*p=2;
    }
}
int main()
{
    int i, arr[4] = {2, 4, 5, 6};
    
    printf("new array is ", increamentarray(arr[4]));
    return 0;
}
