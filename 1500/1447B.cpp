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


int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        vector<int>v;
        cin>>n>>m;
        int x,c(0),ans(0);
        fornt(0,n)
        {
            fornt2(0,m)
            {
                cin>>x;
                if(x<0)
                ++c;
                v.pb(abs(x));
            }
        }
        sort(v.begin(),v.end());
        if(c%2)
        {
            ans+=(-v[0]);
            fornt(1,n*m)
            ans+=v[i];
        }
        else
        {
            fornt(0,n*m)
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
}

