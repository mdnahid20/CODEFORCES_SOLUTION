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
    ll n,p,w,d;
    cin>>n>>p>>w>>d;
    fornt(i,0,w)
    {
        if((p-d*i)%w)continue;
        ll x=(p-d*i)/w;
        if(i+x<=n && x>=0)
        {
            cout<<x<<" "<<i<<" "<<n-i-x;
            return 0;
        }
        else break;
    }
    cout<<"-1\n";
}

