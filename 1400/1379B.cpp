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
    ll l,m,r;
    cin>>l>>r>>m;
    ll mx = r - l,mi = l - r;
    fornt(l,r+1)
    {
        if(m % i <= mx && m >= i)
        {
            int num = m % i;
            cout<<i<<" "<<num + l<<" "<<l<<endl;
            return;
        }
        if(m % i - i >= mi)
        {
            int num = m % i - i;
            cout<<i<<" "<<num + r<<" "<<r<<endl;
            return;
        }
    }
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
    return 0;
}
