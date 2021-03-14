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
    ll t,n;
    cin>>t;
    while(t--)
    {
        vector<ll>b;
        string s;
        cin>>s;
        n=s.size();
        for(ll i=0; i<n; i++)
        {
            if(s[i]!='A') b.pb(i);
        }
        ll ax=0,bx=0,r=b.size(),p=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                while(p<r&&b[p]<i)
                {
                    p++,bx++;
                }
                if(p<r&&b[p]>i) p++;
                else ax++;
            }
        }
        if(p<r)
            bx+=r-p;
        ll ans = ax + bx % 2;
        cout << ans << endl;

    }

    return 0;
}

