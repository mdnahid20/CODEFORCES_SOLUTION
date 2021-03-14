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
    int i,j(0),n;
    int b,even(0),odd(0);
    vector<pair<int,int> > vp;
    sc2(n,b);
    int a[n],d[n];
    fornt(i,1,n+1)
    {
        sc(a[i]);
        if((a[i]%2))
            ++odd;
        else
            ++even;
        vp.pb(make_pair(even,odd));
    }
    if(vp[n-1].first!=vp[n-1].second)
    {
        pr(0);
        return 0;
    }

    even=odd=0;
    fornt(i,1,n-2)
    {
        if(vp[i].first==vp[i].second)
        {
            d[j++]=abs(a[i+1]-a[i+2]);
        }
    }
    sort(d,d+j);
    fornt(i,0,j)
    {
        b-=d[i];
        if(b<0)
        {
            pr(i);
            return 0;
        }
    }
    pr(j);
}

