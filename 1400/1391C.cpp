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
const ll MOD = 1e9+7;
ll n,res,fact;

int main()
{
    fastread();
    cin>>n;
    res=fact=1;
    fornt(1,n)
    {
        res *= 2;
        fact *= i;
        fact %= MOD;
        res %= MOD;
    }
    fact *= n;
    fact %= MOD;
    fact -= res;
    fact %= MOD;
    if(fact<0)
    fact += MOD;
    cout<<fact<<endl;
}

