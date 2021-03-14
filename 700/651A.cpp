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
    int a1,a2,i;
    int c(0),p;
    sc2(a1,a2);
    p=max(a1,a2);
    a1=min(a1,a2);
    a2=p;
    while(a1>0)
    {
        if(a1==1 && a2==1)
            break;
        ++a1;
        a2-=2;
        ++c;
        p=max(a1,a2);
        a1=min(a1,a2);
        a2=p;
    }
    pr(c);
}

