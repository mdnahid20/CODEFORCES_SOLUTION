#include<bits/stdc++.h>
#define fornt(i,n) for(int i=0;i<n;i++)
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
    ll a,b,n,m;
    cin>>a>>b>>n>>m;
    if(a+b<n+m)
    {
        prN;return;
    }if(min(a,b)<m)
    {
        prN;return;
    }
    prY;
}

int main()
{
   fastread();
    int t;
    cin>>t;
    while(t--){
            solve();
    }
}

