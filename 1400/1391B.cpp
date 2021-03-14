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


int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s[n+2];
         fornt(0,n)
        cin>>s[i];
        int ans(0);
        fornt(0,n-1)
        {
            if(s[i][m-1]=='R')
                ++ans;
        }
        fornt(0,m-1)
        {
            if(s[n-1][i]=='D')
                ++ans;
        }
        cout<<ans<<endl;
    }
}
