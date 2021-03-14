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
    ll n,c1,c2,h;
    cin>>t;
    while(t--)
    {
        ll ans(0);
        string s;
        map<char,ll>mp;
        cin>>n>>c1>>c2>>h;
        cin>>s;
        if(h+c2<c1)
        {
            mp['0']=h+c2;
            mp['1']=c2;
        }
        else if(h+c1<c2)
        {
            mp['1']=h+c1;
            mp['0']=c1;
        }
        else
        {
            mp['1']=c2;
            mp['0']=c1;
        }
        fornt(0,n)
        ans += mp[s[i]];
        cout<<ans<<endl;
    }
}
