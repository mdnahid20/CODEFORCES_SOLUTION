#include<iostream>
#include<cstdio>
typedef long long ll;
#define sc(n) scanf("%d",&n)
#define pr(n) printf("%lld\n",n);
#define fornt(i,n) for(i=0; i<n; ++i)
#define Max 10000000;
using namespace std;

int main ()
{
    int t;
    sc(t);
    while(t--)
    {ll x,y;
        ll c(0),n;
        scanf("%lld %lld %lld",&x,&y,&n);
        ll k = n-((n/x)*x);
        if(k!=y)
        {
            if(k>y)
            {
                n -= (k-y);
            }
            else{
             n -= k+(x-y);
            }
            n = max(n,c);
            pr(n);
        }
        else
        {pr(n);}

    }
}
