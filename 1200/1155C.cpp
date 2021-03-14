#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
typedef long long ll;
using namespace std;

ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;

    return gcd (b, a%b);
}
int main ()
{
    int n,m,i,k;
    ll g,q;
    scanf("%d %d",&n,&m);
    ll x[n],p[m],v[n-1];
    for (i=0; i<n; i++)
        scanf("%lld",&x[i]);
    for (i=0; i<m; i++)
        scanf("%lld",&p[i]);

    for (i=0; i<n-1; i++)
        v[i] = x[i+1]-x[i];

    if (n == 2)
        g = v[0];
    else
    {
        g = v[0];

        for (i=1; i<n-1; i++)
            g = gcd (g,v[i]);
    }
    k = 0;
    for (i=0; i<m; i++)
    {
        if (g % p[i] == 0)
        {
            printf("YES\n%lld %d",x[0],i+1);
            k = 1;
            break;
        }
    }
    if (!k)
        printf("NO\n");
}
