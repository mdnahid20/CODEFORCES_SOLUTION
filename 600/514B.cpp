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

int main ()
{
    int n,x,y;
    sc(n);
    sc2(x,y);
    int j,i;
    int a[n],b[n];
    fornt(i,0,n)
    {
        sc2(a[i],b[i]);
    }
    int k[10000]={0},k1,k2;
    int ans(0),k3,k4;
    for(i=0; i<n; ++i)
    {
        if(k[i])continue;
        ++ans;
        k1=a[i]-x;k2=b[i]-y;
        for(j=0; j<n; ++j)
        {
         k3=a[j]-x;k4=b[j]-y;
         if(k1*k4 == k3*k2)k[j]=1;
        }
    }
    printf("%d\n",ans);
}
