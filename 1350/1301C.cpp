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


int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ans1=(n+1ll)*n/2ll;
        ll cnt1=(n-m)/(m+1ll);
        ll cnt2=(n-m)%(m+1ll);
        cout<<ans1-(cnt1*(cnt1+1ll)/2ll)*(m+1ll)-(cnt1+1ll)*cnt2<<endl;
        }
}


