#include<bits/stdc++.h>
#define ll long long
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m;
        int row[n*m+1],col[n*m+1];
        fornt(0,n)
        {
           fornt2(0,m)
           {
               int a;
               cin>>a;col[a]=i2;
           }
        }fornt(0,m)
        {
            fornt2(0,n)
            {
                int a;
                cin>>a;
                row[a]=i2;
            }
        }int ans[n][m];
        fornt(1,n*m+1)
        {
            ans[row[i]][col[i]]=i;
        }fornt(0,n)
        {
            fornt2(0,m)
            cout<<ans[i][i2]<<' ';
            cout<<endl;
        }

        }
    }


