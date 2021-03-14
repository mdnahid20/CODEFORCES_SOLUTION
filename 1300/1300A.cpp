#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int arr[n],total;
        int zero,sum,j;
        zero=sum=total=0;
        for(j=0; j<n; j++)
        {
            cin>>arr[j];
            if(arr[j]==0)
            {
                zero++;
            }
            sum=sum+arr[j];
        }

        if(zero==0)
        {
            if(sum==0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            total=zero;
            sum=sum+zero;
            if(sum==0)
            {
                printf("%d\n",total+1);
            }
            else
            {
                printf("%d\n",total);
            }
        }
    }
}
