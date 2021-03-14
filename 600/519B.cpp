#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)

using namespace std;

int main ()
{
    ll i,n;
    scl(n);
    ll a;
    ll sum1(0),sum2(0),sum3(0);
    fornt(i,0,n)
    {
        scl(a);
        sum1 += a;
    }
    fornt(i,0,n-1)
    {
        scl(a);
        sum2 += a;
    }
    fornt(i,0,n-2)
    {
        scl(a);
        sum3 += a;
    }
    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl;
    return 0;
}
