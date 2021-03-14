#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
#define MX 400000
#define ll long long
using namespace std;

ll a[MX], GCD[MX];
int main ()
{
    ll n;
    cin >> n;
    fornt(0,n) cin >> a[i];
    for (ll i = n; i >= 1; --i) GCD[i] = __gcd(GCD[i + 1], a[i]);
    ll ans = 0;
    fornt(0,n)  ans = __gcd(ans, (a[i] * GCD[i + 1] / __gcd(a[i], GCD[i + 1])));
    cout << ans << endl;
    return 0;
}

