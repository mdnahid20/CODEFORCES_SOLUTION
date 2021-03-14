#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(j,n) for(int i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
using namespace std;
const int N = 1025;
int a[N],n;
bool b[N];

bool check(int k)
{
    fornt(0,n)
    if(!b[a[i]^k])
        return false;

    return true;
}
void solve()
{
    fornt(0,N)
    b[i]=false;

    sc(n);
    fornt(0,n)
    {
        sc(a[i]);
        b[a[i]] = true;
    }

    for(int k=1; k<1024; ++k)
    {
        if(check(k)){
            pr(k);return;
        }
    }

    printf("-1\n");
}
int main ()
{
    int t;
    sc(t);
    while(t--)
    {
       solve();
    }

}

