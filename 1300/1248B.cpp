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
    int n;
    cin>>n;
    int a[n],b[n];
    fornt(i,0,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    ll x(0),y(0),c(0),d(0);
    fornt(i,0,n)
    {
        if(!(i%2))
            x+=b[c++];
        else
            y+=a[d++];
    }
    cout<<(x*x)+(y*y)<<endl;
}

