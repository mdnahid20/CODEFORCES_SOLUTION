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
        ll n,x,c(0);
        cin>>n>>x;
        ll a[n+5];
        fornt(0,n)
        cin>>a[i];
        sort(a,a+n);
        ll ans(0);
        for(ll i = n-1; i>=0; --i)
        {
            ++c;
            if(a[i]*c>=x)
            {
                ++ans;
                c=0;
            }
        }
        cout<<ans<<endl;
    }
}

