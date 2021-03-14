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

int k=1;
void solve()
{
    int n,m;
    cin>>n>>m;
    ll a[n],sum;
    fornt(i,n)
    cin>>a[i];
    fornt(i,n)
    {
        sum =0;
        for(int j= i; j<n; ++j)
        {
            sum += a[j];
            if(sum%m==0 && sum!=0)
            {
                prY;k=0;
                return;
            }
        }

    }
prN;
}

int main()
{
    fastread();
    solve();
}


