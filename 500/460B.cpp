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
using namespace std;

ll digit(ll n)
{
    ll ans(0);
    while(n>0)
    {
        ans += (n%10);
        n /= 10;
    }return ans;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<ll>v;
    ll a,b,c;
    cin>>a>>b>>c;
    fornt(1,81+1)
    {
        ll ans = b*pow(i,a)+c;
        if((ans>0 && ans<1000000000) && digit(ans)==i)
            v.pb(ans);
    }cout<<v.size()<<endl;
    fornt(0,v.size())
    cout<<v[i]<<' ';
}

