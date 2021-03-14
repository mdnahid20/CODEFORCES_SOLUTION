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
        ll n,m,ans=0;
        cin>>n>>m;
        pair<ll,ll>a[m];
        fornt(0,m)
        cin>>a[i].first>>a[i].second;
        sort(a,a+m);
        ll val[m],sum[m];
        fornt(0,m)
        val[i] = a[i].first;
        sum[m-1] = val[m-1];
        for(int i = m-2; i>=0; i--)
            sum[i] = sum[i+1] + val[i];
        fornt(0,m)
        {
            ll idx = lower_bound(val,val+m,a[i].second)-val,c,mx;
            if(idx<=i)
            {
                if(m-idx>n)
                    idx = m - n;
                mx =0;
                c=n;
            }
            if(idx>i)
            {
                if(m-idx>n-1)
                    idx = m-n+1;
                mx = a[i].first;
                c = n-1;
            }
            if(idx<m)
            {
                mx += sum[idx];
                c -= (m-idx);
            }
            mx += c*a[i].second;
            ans = max(ans,mx);

        }
        cout<<ans<<endl;
    }
}

