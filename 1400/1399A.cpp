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

int main ()
{
    int i,n,t;
    sc(t);
    while(t--)
    {
        sc(n);
        int a[n],c(0);
        fornt(i,0,n)
        sc(a[i]);

        sort(a,a+n);
        fornt(i,0,n-1)
        {
            if((a[i+1]-a[i])>1)
            {
                c=1;
                break;
            }
        }
        if(c)
            printf("NO\n");
        else
            printf("YES\n");
    }


}

