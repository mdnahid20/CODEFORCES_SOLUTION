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
#define nre printf("-1\n")
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    if(n%2!=0)
    {
        prY;
        return;
    }
    else
    {
        while(n>2)
        {
            n=n/2;
            if(n%2!=0)
            {
                prY;
                return;
            }
        }

        prN;
    }/*
    ll k=sqrt(n);
    for(ll i=3; i<=k+1; i+=2)
    {
        if(n%i==0)
        {
            prY;
            return;
        }
    }
    prN;
*/
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

