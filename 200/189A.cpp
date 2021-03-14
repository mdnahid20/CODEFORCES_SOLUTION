#include<iostream>
#include<cstdio>
#include<stdlib.h>
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)

using namespace std;

int main ()
{
    int a,b,c,n,ans(0);
    int i,j,k,maxi;
    sc2(n,a);
    sc2(b,c);
    maxi=min(a,min(b,c));
    maxi=n/maxi;
    for(i=maxi; i>=0; --i)
    {
        for(j=0; j<=maxi; ++j)
        {
            k=abs((n-(i*a+b*j))/c);
            if(n==(i*a+b*j+k*c))
            {
                ans=max(ans,i+j+k);
            }
        }
    }
    pr(ans);
}
