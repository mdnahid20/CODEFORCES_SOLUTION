#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;

int main ()
{
    ll a,b,n;
    ll x,i,y;
    scanf("%lld %lld %lld",&n,&a,&b);
    x=n/a+1;
    for(i=0; i<=x; i++)
    {
        y=i*a;
        if((n-y)%b==0 && n-y>=0)
        {
            printf("YES\n%lld %lld\n",i,(n-y)/b);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
