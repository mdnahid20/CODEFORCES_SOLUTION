#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define pb push_back
#define ll long long
using namespace std;

int main ()
{
    ll i,j,n;
    scanf("%lld",&n);
    ll a[n],b[n],c[n];
    for(i=1; i<=n; ++i)
    {
        scanf("%lld",&a[i]);
    }
    for(i=1; i<=n; ++i)
    {
        scanf("%lld",&b[i]);
        c[i]=a[i]-b[i];
    }
    sort(c+1,c+n+1);
    ll ans=0;
    for(int i=1,j=n; i<=n; ++i)
    {
        while(j>i && c[i]+c[j]>0)
        {
            --j;
        }
        ans+=n-max(i,j);
    }
    printf("%lld\n",ans);
}
