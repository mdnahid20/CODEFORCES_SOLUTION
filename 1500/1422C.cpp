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
    string s;
    cin>>s;
    int n = s.length();
    vector<ll>a(n);
    fornt(i,n)
    a[i] = s[i]-'0';
    const int MOD = (int)1e+9+7;
    ll ans(0),sum(0),p=1;
    for (ll i = n - 1; i >= 0; --i)
    {
        ll k = (i * (i + 1) / 2 % MOD * p % MOD + sum) % MOD;
        sum = (sum + p * (n - i) % MOD) % MOD;
        p = p * 10 % MOD;
        ans = (ans + a[i] * k % MOD) % MOD;
    }
    cout<<ans<<endl;
}

