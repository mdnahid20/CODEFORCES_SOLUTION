#include<iostream>
#include<cstdio>
#include <algorithm>
using namespace std;
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int d=n;
        for(int i=1; i*i<=n; ++i)
        {
            if(n%i==0)
            {
                 if(i<=k)
                {
                    d=min(d,n/i);
                }
                if((n/i)<=k)
                {
                    d=min(d,i);
                }
            }
        }
        printf("%d\n",d);
    }
}
