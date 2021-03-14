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
#define pry printf("Yes\n")
#define prn printf("No\n")
using namespace std;

int main ()
{
    int t,i;
    sc(t);
    while(t--)
    {
        int n,x,y;
        int odd(0),even(0);
        sc2(n,x);
        fornt(i,0,n)
        {
            sc(y);
            if(y%2)
                odd++;
        }
        even = n-odd;
        if(odd)
        {
            if(even)
            {
                if(odd % 2 == 1)
                pry;
                else
                {
                    if(x <= n - 1)
                    pry;
                    else
                    prn;
                }
            }
            else
            {
                if(x%2==1 && x<=odd)
                 pry;
                else
                prn;
            }
        }
        else
        {
            prn;
        }
    }
}

