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
//#define M
using namespace std;

int main ()
{
    int i,j,k;
    int t,a[40000];
    a[1]=2;
    for(i=2;;i++)
    {
        a[i]=a[i-1]+(i-1)*3+2;
        if(a[i]>=1000000000)
            break;
    }
    k=i-1;
    sc(t);
    while(t--)
    {
        int c(0),n;
        sc(n);
        for(i=k; i>=1; i--)
        {
            while(a[i]<=n)
            {
                n-=a[i];
                ++c;
            }
        }
        pr(c);
    }
    return 0;
}
