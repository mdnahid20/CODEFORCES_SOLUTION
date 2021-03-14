#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<math.h>
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
    int n,i,j,sum;
    sc(n);
    int a[n];
    fornt(i,0,n)
    {
        sc(a[i]);
    }
    for(i=0; i<=pow(2,n); ++i)
    {
        int p=i;
        sum=0;
        for(j=0; j<n; ++j)
        {
            if(p & 1)
                 sum-=a[j];
            else
                sum+=a[j];
            p/=2;
        }
        if(sum%360==0)
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
