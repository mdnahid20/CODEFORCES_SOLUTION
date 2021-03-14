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
    while(t--){
    vector<ll>a(3),b(3);
    fornt(0,3)
    cin>>a[i];
    fornt(0,3)
    cin>>b[i];
    ll ans(0),mini;
    mini = min(a[2],b[1]);
    ans += 2LL*mini;
    a[2] -= mini;
    b[1] -= mini;
    ll maxi =max(0LL,b[2]-a[2]-a[0]);
    ans -= 2LL*maxi;
    cout<<ans<<endl;
}
}
