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
    int a[n+1],b[n+1],sum(0);
    fornt(i,0,n)
    cin>>a[i];
    fornt(i,0,n)
    {
        cin>>b[i];
        sum += b[i];
    }
    if(sum!=n && sum)
    {
        prY;
        return;
    }
    fornt(i,0,n-1)
    {
        if(a[i]>a[i+1])
        {
            prN;
            return;
        }
    }prY;
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
