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
#define pry printf("YES\n")
#define prn printf("NO\n")
using namespace std;

int main ()
{
    int t,i,j;
    sc(t);
    while(t--)
    {
        int n,m,k;
        sc(n);
        sc2(m,k);
        int a[n];
        fornt(i,0,n)
        sc(a[i]);
        bool flag=true;
        fornt(i,0,n-1)
        {
           int p = max(0,a[i+1]-k);
            m += a[i]-p;
            if(m<0)
            {
                flag=false;
                break;
            }
        }

        if(flag)
            pry;
        else
            prn;
    }
}


