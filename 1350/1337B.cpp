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
        int x,n,m;
        cin>>x>>n>>m;
        fornt(i,0,n)
        {
            if(x<=20)
                break;
            x = (x/2)+10;
        }
        x -= (10*m);
        if(x<=0)
            prY;
        else
            prN;
    }
}



