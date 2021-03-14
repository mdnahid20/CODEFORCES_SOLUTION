#include<bits/stdc++.h>
#define fornt(i,n) for(int i=0;i<n;i++)
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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        string s[n];
        fornt(i,n)
        cin>>s[i];
        if(x*2<y)
            y = 2*x;
        int c,ans(0);
        fornt(i,n)
        {
            c=0;
            fornt(j,m+1)
            {

                if(c>0 && s[i][j]!='.')
                {
                    int k= c/2,k2= c%2;
                    ans += (k*y + k2*x);
                    c = 0;
                }if(s[i][j]=='.')
                ++c;
            }
        }
        cout<<ans<<endl;
    }
}

