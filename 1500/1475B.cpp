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

void solve()
{
    int n;
    cin>>n;
    if(n<2020)
    {
        prN;
        return;
    }
    int k=n/2020;
    fornt(i,0,k+1)
    {
        int ans = (2020*i) + (2021*(k-i));
        if(ans==n)
        {
            prY;
            return;
        }
    }
    prN;
}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}



