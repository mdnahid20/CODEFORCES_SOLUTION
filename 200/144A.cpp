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
    int n;
    cin>>n;
    int a[n+5],mx=0,mi=1000;
    fornt(1,n+1)
    {
        cin>>a[i];
        if(a[i]>mx)
            mx = a[i];
        if(a[i]<mi)
            mi = a[i];
    }
    int c,b;
    fornt(1,n+1)
    {
        if(mx==a[i])
        {
            c=i;
            break;
        }
    }
    for(int i= n; i>0; --i)
    {
        if(mi==a[i])
        {
            b=i;;
            break;
        }
    }
    int ans(0);
    if(c>b)
    {
        ans += (c-1);
        ans += (n-b-1);
        cout<<ans<<endl;
    }
    else if(c==b)
        cout<<"0\n";
    else
        cout<<(c-1)+(n-b)<<endl;
}



