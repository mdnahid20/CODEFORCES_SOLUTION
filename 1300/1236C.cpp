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
    cin>>n;;
    vector<int>v[n];
    int c(0);
    while(c!=(n*n))
    {
        fornt(i,0,n)
        v[i].pb(++c);
        if(c==(n*n))
            break;
        for(int i=n-1; i>=0; --i)
        v[i].pb(++c);
    }
    fornt(i,0,n)
    {
        fornt(j,0,n)
        cout<<v[i][j]<<' ';
        cout<<endl;
    }
}

