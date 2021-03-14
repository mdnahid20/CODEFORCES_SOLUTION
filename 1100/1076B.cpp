#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main()
{
    ll n,ans(0),k,i;
    scanf("%lld", &n);
    while (n%2 != 0)
    {
        k = n;
        for(i=2; i*i<=n; i++)
        {
            if (n%i == 0)
            {
                k = i;
                break;
            }
        }
        n -= k;
        ans++;
    }
    ans += n/2;
    printf("%lld\n", ans);
    return 0;
}
