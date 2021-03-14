#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main()
{
    fastread();
    ll a,b,c,d,ans(0);
    cin>>a>>b>>c>>d;
    for(ll i =b; i>=a; --i)
    {
        ll x = max(b,min(c,d-i+1));
        ll u = min(x+i,d+1)-c;
        ll y =max(b,c-i+1);
        ll v = min(y+i,d+1)-c;
        ll p = (u+v)*((u-v+1)/2) + ((u-v+1)%2 ? (u+v)/2:0);
        ans += (p+(c-x)*(d-c+1));
    }
    cout<<ans<<endl;
}

