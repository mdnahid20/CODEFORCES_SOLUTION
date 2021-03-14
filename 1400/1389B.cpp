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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,z,p;
        cin>>n>>k>>z;
        int a[n+5],f[n+5];
        fornt(1,n+1)
        cin>>a[i];
        f[0]=0;
        f[1] = a[1];
        int mx = 0;
        int ans = f[1];
        for(int i = 2; i <= k + 1; i++)
        {
            f[i] = f[i - 1] + a[i];
            mx = max(mx,a[i] + a[i - 1]);
            for(int j = 0; j <= z; j++)
            {
                if(i + j * 2 <= k + 1)
                {
                    ans = max(ans,f[i] + mx * j);
                    if(j < z && i + j * 2 + 1 <= k + 1)
                    {
                        ans = max(ans,f[i] + mx * j + a[i - 1]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}


