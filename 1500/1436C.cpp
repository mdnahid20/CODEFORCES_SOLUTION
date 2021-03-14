#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
#define MOD 1000000007
using namespace std;

ll fact(ll n)
{
    ll res=1,i;
    for(i=2; i<=n; ++i)
        res = ((res%MOD)*(i%MOD))%MOD;
    return res;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,x,pos;
    cin>>n>>x>>pos;
    ll l=0,r=n;
    ll greaters = n-x,smaller = x-1;
    ll sum=1,space = n-1;
    while(l<r)
    {
        ll mid = (l+r)/2;
        if(mid==pos)
            l = mid + 1;
        else if(mid>pos)
        {
            sum = (sum % MOD * greaters % MOD) % MOD;
            greaters--;
            space--;
            r = mid;
        }
        else
        {
            sum = (sum % MOD * smaller % MOD) % MOD;
            smaller--;
            space--;
            l = mid + 1;
        }
    }
    if(l>0 && (l-1)==pos)
    {
        sum = (sum%MOD * fact(space)%MOD)%MOD;
    }
    else
        sum =0;
    cout<<sum<<endl;
}

