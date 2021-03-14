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
map<ll,ll>mp,vp;
int n;
void round(int x,int c)
{
    ++c;
    if(vp[x]<c)
        vp[x]=c;
    else
    return;
    for(int i=2; i*x<=n; ++i)
    {
        if(mp[x*i]>mp[x])
            round(x*i,c);
    }
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>n;
        fornt(1,n+1)
        {
            cin>>a;
            mp[i]=a;
        }
        fornt(1,n+1)
        {
            if(!vp[i])
                round(i,0);
        }
        ll m=0;
        fornt(1,n+1)
        m = max(vp[i],m);
        cout<<m<<endl;
        vp.clear();mp.clear();
    }
}


