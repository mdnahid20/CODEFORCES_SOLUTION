#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define M 10000009
using namespace std;

int main ()
{
    int w,i,n;
    sc2(n,w);
    int a[n];
    fornt(i,0,n)
    sc(a[i]);

    int p,sum(0),k(1);
    fornt(i,0,w)
    sum += a[i];
    p=sum;
    for(i=1; i+w-1<n; ++i)
    {
        sum -= a[i-1];
        sum += a[i+w-1];
        if(sum<p)
        {
            k=i+1;
            p=sum;
        }
    }
    pr(k);
}

