#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define MP(x,y) make_pair(x,y)
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;
int len,p[50000];

void build(int a, int b)
{
    len = a * b;
    p[0] = 0;
    for(int i = 1; i <= len; i++)
    {
        p[i] = p[i - 1];
        if((i % a) % b != (i % b) % a)
            p[i]++;
    }
}

ll query(ll l)
{
    ll cnt = l / len;
    int rem = l % len;
    return p[len] * 1ll * cnt + p[rem];
}
ll query(ll l,ll r)
{
    return query(r) - query(l - 1);
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
        int a,b,q;
        ll l,r;
        cin>>a>>b>>q;
        build(a,b);
        fornt(0,q){
            cin >> l >> r;
            cout << query(l, r) << " ";
        }
        cout<<endl;
    }
}
