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
        int n,k;
        cin>>n>>k;
        ll a[n*k+5],ans(0);
        fornt(1,n*k+1)
        cin>>a[i];
        int c1 = n-ceil(n*1.0/2),c2=k;
        for(int j=(n*k)-c1; c2>0; j-=(c1+1))
        {
            --c2;
            ans+=a[j];
        }
        cout<<ans<<endl;
    }
}

