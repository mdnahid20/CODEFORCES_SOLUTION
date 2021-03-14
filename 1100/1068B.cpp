#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;


int main()
{
    ll n,ans(0);
    scanf("%lld",&n);
    if(n<=2)
    {
        cout<<n<<endl;
        return 0;
    }
    for(ll i=1; i*i<=n; i++)
    {
        if(i*i==n)
            ans++;
        else if(n%i==0)
            ans+=2;
    }
    cout<<ans<<endl;
}
