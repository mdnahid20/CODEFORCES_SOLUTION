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

int main()
{
    int i,j,n,m;
    sc(n);
    int a[n];
    fornt(i,0,n)sc(a[i]);

    int ans=1,k,c;
     k=0;
    while(k<n-1)
    {
        c=1;
        while(k<n-1 && a[k+1]<=2*a[k])
        {
            c++;
            k++;
        }
        ans=max(ans,c);
        ++k;
    }
    pr(ans);
    return 0;
}
