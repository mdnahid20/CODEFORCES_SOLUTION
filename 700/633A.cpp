#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main ()
{
    ll a,b,c;
    ll k,i,ans(0);
    scanf("%lld %lld %lld",&a,&b,&c);
    for(i=0; i<10001; ++i)
    {
        k=(c-(a*i));
        if(k<0)
        {
            ans=1;
            break;
        }
        if(k%b==0)
        {
            break;
        }
    }
    if(!ans)
        printf("Yes\n");
    else
        printf("No\n");
}
