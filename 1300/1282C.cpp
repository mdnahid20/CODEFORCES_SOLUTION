/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

#include<bits/stdc++.h>
#define fornt(i,index,n) for(ll i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;
const int N=2*1e5+10;
ll a[N],f[N];
int main()
{
   fastread();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,p,k;cin>>n>>p>>k;
    fornt(i,1,n+1) cin>>a[i];
    sort(a+1,a+n+1);
    ll ans=0;
    fornt(i,1,n+1){
        if(i>=k){
            f[i]=min(f[i-1],f[i-k])+a[i];
        }else f[i]=f[i-1]+a[i];
        if(f[i]<=p) ans=max(ans,i);
    }
    cout<<ans<<endl;
}}



