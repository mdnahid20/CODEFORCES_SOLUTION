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
        int n,k;
        cin>>n>>k;
        ll a[n],w[k];
        fornt(i,n)
        cin>>a[i];
        fornt(i,k)
        cin>>w[i];
        sort(w,w+k);
        sort(a,a+n);
        int pt = n-k;
        ll ans(0);
        fornt(i,k)
        {
            ans += a[n-i-1];
            if(w[i]==1)
                ans += a[n-i-1];
            else
            {
                fornt(j,w[i]-1)pt--;
                ans+= a[pt];
            }
        }
        cout<<ans<<endl;
    }
}

