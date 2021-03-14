#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int i,n,q;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        int arr[n],arr2[n];
        if(n==0)continue;
        for(i=1; i<=n; ++i)12
        {
            scanf("%d",&arr[i]);
        }
        for(i=1; i<=n; ++i)
        {
            int c=0,d=arr[i],p;
            if(arr[i]!=0)
            {
               do
            {
                p=arr[d];
                d=p;
                  ++c;
            }
            while(p!=arr[i]);
            }
                arr2[i]=c;
        }
         for(i=1; i<n; ++i)
            printf("%d ",arr2[i]);

         printf("%d\n",arr2[n]);
    }

}
