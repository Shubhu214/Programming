#include<stdio.h>
int main()
{
    int temp,pos, n= 10,a[4]={11,22,33,44};
    printf("Enter position:");
    scanf("%d", &pos);
    temp = pos;
    while(temp<=n-1)
    {
        a[temp]=a[temp+1];
        temp = temp +1;
    }
    n = n-1;
    for(int i=0;i<4;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
