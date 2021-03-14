#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int j=p; j<n; ++j)
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
    int m,n,a[7]={0};
    int b[7],t;
    sc2(m,n);
    while(m--)
    {
        fornt(0,n)
        {
            sc(t);
            if(i==0)
                a[i]+=t;
            else
            {
                if(a[i-1]>a[i])
                    a[i]=a[i-1]+t;
                else
                    a[i]+=t;
            }
            if(i==n-1)
            printf("%d ",a[i]);
        }
    }
    return 0;
}

