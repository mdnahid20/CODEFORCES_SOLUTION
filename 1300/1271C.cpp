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
    ll n,x,y;
    ll xplus,xminus,yplus,yminus;
    xplus=xminus=yplus=yminus=0;
    cin>>n>>x>>y;
    ll a[n],b[n];
    fornt(i,0,n)
    {
        cin>>a[i]>>b[i];
        if(a[i]>x)
            ++xplus;
        if(a[i]<x)
            ++xminus;
        if(b[i]>y)
            ++yplus;
        if(b[i]<y)
            ++yminus;
    }
    ll ansx,ansy,mx(0);
    if(x+1>=0 && y>=0 && mx<xplus)
    {
        ansx=x+1;
        ansy=y;
        mx = xplus;
    }
    if(x-1>=0 && y>=0 && mx<xminus)
    {
        ansx=x-1;
        ansy=y;
        mx = xminus;
    }
    if(y+ 1 >=0 && x>= 0 && mx < yplus)
    {
        ansy=y+1;
        ansx=x;
        mx = yplus;
    }
    if(y- 1 >=0 && x>= 0 && mx < yminus)
    {
        ansy=y-1;
        ansx=x;
        mx = yminus;
    }
    cout<<mx<<endl;
    if(mx)
    cout<<ansx<<" "<<ansy<<endl;
}

