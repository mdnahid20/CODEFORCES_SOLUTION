#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main ()
{
    int t;
    sc(t);
    while(t--)
    {
        int n,c(0);
        sc(n);
        int b[n+5],a[n+5];
        fornt(0,n)
        {
            sc(a[i]);
            c = (a[i]>a[c] ? i:c);
        }
        b[0] = a[c];
        a[c]=0;
        int cg = b[0];
        for (int i = 1; i < n; i++)
        {
            int ci = 0, cans = 0;
            for (int j = 0; j < n; j++)
                if (a[j] && __gcd(a[j], cg) > cans)
                {
                    cans = __gcd(a[j], cg);
                    ci = j;
                }
            b[i] = a[ci];
            cg = cans;
            a[ci] = 0;
        }

        fornt(0,n)
        cout<<b[i]<<' ';
        cout<<endl;
    }
}
