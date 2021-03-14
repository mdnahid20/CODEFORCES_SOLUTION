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
    int n,k;
    int counta[26]={0},countb[26]={0};
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    fornt(i,0,n)
    {
        ++counta[a[i]-'a'];
    }
    fornt(i,0,n)
    {
        ++countb[b[i]-'a'];
    }
    fornt(i,0,25)
    {
        if(counta[i]<countb[i])
        {
            prN;
            return;
        }
        else
        {
            int d= counta[i]-countb[i];
            if(d%k!=0)
            {
                prN;
                return;
            }
            else
                counta[i+1]+=d;
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
