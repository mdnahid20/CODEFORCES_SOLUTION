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
ll x,sum,m,n;
int main()
{
    fastread();
    cin>>n;
    fornt(i,0,n)
    {
        cin>>x;
        sum+=x;
        m=max(m,x);
    }
    if (sum%2==1 || sum<2*m)
    {
        prN;
        return 0;
    }
    prY;
}
