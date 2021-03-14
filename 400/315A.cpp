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
    int n,ans(0),c[10000]={0};
    cin>>n;
    int a[n+5],b[n+5];
    fornt(0,n)
    {
        cin>>a[i]>>b[i];
        ++c[b[i]];
    }fornt(0,n)
    {
        --c[b[i]];
        if(c[a[i]]==0)
            ++ans;
        ++c[b[i]];
    }
    cout<<ans<<endl;
}

