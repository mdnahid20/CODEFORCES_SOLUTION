#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
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
int a[52],n;
int check(int s)
{
    int l,r,i,k(0);
    l=1,r=n;
    while(l<r)
    {
        if(a[l]+a[r]==s)
        {
            ++k,++l;
            --r;
        }
        else{
            if(a[l]+a[r]>s)
            ++l;
            else
            --r;
        }
    }return k;
}
int main ()
{
    int i,t;
    sc(t);
    while(t--)
    {
        sc(n);
        fornt(i,1,n+1)
        sc(a[i]);

        sort(a+1,a+n+1,greater<int>() );
        int ans(0);
        for(i=2; i<=2*n; ++i)
        {
            int p = check(i);
            ans = max(ans,p);
        }
       pr(ans);
    }
}
