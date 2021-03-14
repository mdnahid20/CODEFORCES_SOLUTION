#include<iostream>
#include<cstdio>
#define ll long long
#define sc(x) scanf("%d",&x);
#define scl(x) scanf("%lld",&x);
#define sc2(x,y) sccanf("%d %d",&x,&y)
#define fornt(i,n) for(i=0; i<n; i++)

int main ()
{
    int t,i;
    sc(t);
    while(t--)
    {
        ll i,n;
        scl(n);
        --n;
        printf("%d\n",(n/2)+1);
    }
}

