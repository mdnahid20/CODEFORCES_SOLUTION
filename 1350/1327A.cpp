#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#define ll long long
#define sc(x) scanf("%lld",&x);
#define sc2(x,y) scanf("%lld %lld",&x,&y)
#define fornt(i,n) for(i=0; i<n; i++)
using namespace std;

int main ()
{
    ll i,j,m;
    ll n,k,t;

    sc(t);
    while(t--)
    {
        sc2(n,k);
        if(n%2==k%2) {
            if(k*k > n)
                printf("NO\n");
            else
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
}
