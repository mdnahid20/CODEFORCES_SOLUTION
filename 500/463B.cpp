#include<stdio.h>


int main ()
{
    int n;
    int sum=0,d=0;
    scanf("%d",&n);
    int i,arr[n];
    arr[0]=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i-1]-arr[i];
        if(sum<0)
        {
            d -= sum;
            sum=0;
        }
    }
    printf("%d\n",d);
    return 0;
}
