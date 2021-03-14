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


int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5],ans[n+5];
        vector<int>v[n+5];
        fornt(1,n+1)
        cin>>a[i];
        fornt(1,n+1)
        {
            v[a[i]].pb(i);
            ans[i]=1e7;
        }
        fornt(1,n+1)
        {
            if(v[i].empty())continue;
            int k=v[i][0];
            for(i2=1; i2<v[i].size(); ++i2)
            {
                k = max(k,v[i][i2]-v[i][i2-1]);
            }
            k = max(k,n-v[i][i2-1]+1);
            if(ans[k]==1e7)
                ans[k]=i;
        }
        fornt(2,n+1)
        {
            ans[i] = min(ans[i-1],ans[i]);
        }
        fornt(1,n+1)
        {
            cout<<(ans[i]!=1e7?ans[i]:-1)<<' ';
        }
        cout<<endl;
    }
}
