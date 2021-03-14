#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int i,b;
        int arr[n];
        if(n>0)
        {
            for(i=0; i<n; ++i)
            {
                scanf("%d",&arr[i]);
            }
            sort(arr,arr+n);
            b=arr[0]+k;
            int a=arr[n-1]-k;
            if(b>=a)
            {
                printf("%d\n",b);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
}
