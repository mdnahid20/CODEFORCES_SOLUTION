/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")

using namespace std;
const int maxn=1e5+10;
const ll mod=1e9+7;
ll fac[100];
int cnt=0;
void init(ll x)
{
    for(ll i=2; i*i<=x; i++)
    {
        if(x%i==0) fac[cnt++]=i,x/=i;
        while(x%i==0) x/=i;
    }
    if(x>1) fac[cnt++]=x;
}
ll qpow(ll a,ll b)
{
    ll ret=1;
    while(b)
    {
        if(b&1) ret=ret*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ret;
}
int main()
{
    fastread();
    ll x,n;
    cin>>x>>n;
    init(x);
    ll ans=1;
    for(int i=0; i<cnt; i++)
    {
        ll p=fac[i];
        if(n<p) break;
        ll tmp=1;
        int k=0;
        while(tmp<=n/p)
        {
            tmp*=p;
            ans=ans*(qpow(p,n/tmp))%mod;
        }
    }
    cout<<ans<<endl;
    return 0;
}


