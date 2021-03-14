#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;

ll a[200007],cn[2000]={0};
int main ()
{
    ll i,n,k;
    ll ans(0),p;
    scanf("%lld %lld",&n,&k);
    for(i=0; i<n; ++i)
    {
        scanf("%lld",&a[i]);
        a[i]%=k;
        ++cn[a[i]];
    }
    p=cn[0];
    ll first(p),second=n-1;
    ans += p/2;
    sort(a,a+n);
        for(i=first; i<second; ++i)
        {
            if(k-a[second]==a[i])
            {
                first=i+1;--second;
                ++ans;
            }
            else if(k-a[second]<a[i])
            {
                --second;
                --i;
            }
        }
    printf("%lld\n",2*ans);
    return 0;
}
