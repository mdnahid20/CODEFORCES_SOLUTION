#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main ()
{
    ll t,i,a,c,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        a = 0;
        for (i = 2; i * i <= n; ++i) {
            if(n % i == 0) {
                a = i;
                n /= i;
                break;
            }
             }
        if(a < 2) {
            printf("NO\n");
            continue;
        }
        c= 1;
        for (i = 2; i * i <= n; ++i) {
            if(n% i == 0 && i != a && n/i != i) {
                printf("YES\n");
                cout << a << " " << i << " " << n/ i << endl;
                c = 0;
                break;
            }
        }
        if(c)
            printf("NO\n");
                }
}
