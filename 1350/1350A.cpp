#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;

ll div(ll n)
{
    int c(0),i;
    for(i = 3; i*i<=n; i+=2)
    {
        if(!(n%i))
        {
            c=1;
            break;
        }
    }
    if(c)
        return n+i;
    else
        return n*2;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans;
        cin>>n>>k;
        ans = n;
        while(k--)
        {
            if(!(ans%2))
            {
                ans  += 2*(k+1);
                break;
            }
            else
            {
                ans = div(ans);
            }
        }
        cout<<ans<<endl;
    }
}
