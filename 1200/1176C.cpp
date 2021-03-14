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
    int n,i,a;
    int v1,v2,v3,v4,v5,v6;
    v1=v2=v3=v4=v5=v6=0;
    sc(n);
    fornt(i,0,n)
    {
        sc(a);
        if(a==4)
            v1++;
        else if(a==8 && v1)
        {
            v1--;
            v2++;
        }
        else if(a==15 && v2)
        {
            v2--;
            v3++;
        }
        else if(a==16 && v3)
        {
            v3--;
            v4++;
        }
        else if(a==23 && v4)
        {
            v4--;
            v5++;
        }
        else if(a==42 && v5)
        {
            v5--;
            v6++;
        }
    }
    int ans=n-(6*v6);
    pr(ans);
}

