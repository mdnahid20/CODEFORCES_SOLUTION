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
    int a[n],b[n];
    int c[100008]={0},d[100008]={0};
    fornt(i,1,n+1)
    cin>>a[i];
    fornt(i,1,n+1)
    cin>>b[i];
    fornt(i,1,n+1)
    {
        if(a[i]==1)
        {
            fornt(j,i,n+1)
            c[j]=1;
            break;
        }
    }
    fornt(i,1,n+1)
    {
        if(a[i]==-1)
        {
            fornt(j,i,n+1)
            d[j]=1;
            break;
        }
    }
    fornt(i,1,n+1)
    {
        if(a[i]!=b[i])
        {
            if(a[i]>b[i])
            {
                if(!d[i-1])
                {
                    prN;
                    return;
                }
            }
            else
            {
                if(!c[i-1])
                {
                    prN;
                    return;
                }
            }
        }
    }
    prY;
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

