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
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        map<ll,ll>mp;
        fornt(1,n+1)
        {
            cin>>a[i];
            ll y=k-a[i];
            if(y>a[i])
                a[i]=1;
            else if(y<a[i])
                a[i]=0;
            else {
                    ++mp[a[i]];
                if(mp[a[i]]%2==0)
                    a[i]=1;
                else
                    a[i]=0;
            }
        }
        fornt(1,n+1)
        cout<<a[i]<<' ';
        cout<<endl;
    }
}
