#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;

int main ()
{
    ll r,x,y;
    ll n,i,j;
    scanf("%lld",&n);
    n=n-1;
    for(i=1; i*i<=n; ++i)
    {
        if(n%i==0)
        {
            x=i,r=n;
            r= r-(x*x)-x;
            if(r%(2*x)==0)
            {
                y=r/(2*x);
                if(x<=y)
                {
                    printf("%lld %lld\n",x,y);
                    return 0;
                }
            }
        }
    }
    printf("NO\n");
}
