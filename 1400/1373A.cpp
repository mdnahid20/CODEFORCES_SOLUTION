#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    ll a,b,c;
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        ll p=b*a,k=0;
        if(c<=a)
        {
            printf("-1 ");
        }
        if(c>a)
        {
            printf("1 ");
        }
        if(p>c)
        {
            printf("%lld\n",b);
            k=1;
        }
        if(!k)
        {
            printf("-1\n");
        }
    }
    return 0;
}

