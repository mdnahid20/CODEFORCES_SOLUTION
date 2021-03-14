#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
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
    int n,m,x,y,c(0),k(0);
    vector< pair<int,int> > v;
    cin>>n>>m>>x>>y;
    for(ll row = 1; row <= n; row++)
    {
        if(row % 2)
        {
            for(int col = 1; col <= m; col++)
            {
                cout<<1 + (row + x - 2) % n<<" "<<1 + (col + y - 2) % m<<endl;;
            }
        }
        else
        {
            for(int col = m; col >= 1; col--)
            {
                cout<<1 + (row + x - 2) % n<<" "<<1 + (col + y - 2) % m<<endl;;
            }
        }
    }
}
