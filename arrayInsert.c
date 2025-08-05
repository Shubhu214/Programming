#include<stdio.h>
int main()
{
    int temp,pos, n= 10, value ,a[10]={11,22,33,44};
    printf("Enter position:");
    scanf("%d", &pos);
    printf("Enter value:");
    scanf("%d", &value);
    temp = n-1;
    while(temp>=pos)
    {
        a[temp + 1]=a[temp];
        temp = temp - 1;
    }
    a[pos] = value;
    n = n+1;
    for(int i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
