#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;

void solve()
{
    ll n,x,m;
    cin>>n>>x>>m;
    ll a,b,l,r;
    a=b=x;
    fornt(0,m)
    {
        cin>>l>>r;
        if(r < a || b < l)continue;

        a = (l < a) ? l : a;
        b = (r > b) ? r : b;
    }
    cout<<b-a+1<<endl;
}
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
