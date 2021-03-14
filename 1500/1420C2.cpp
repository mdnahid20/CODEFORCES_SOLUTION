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
int a[1000006],n;
ll ans(0);
void inserts(int i)
{
    if(i==0 || i==n+1)
        return;
    if(a[i-1]<a[i] && a[i]>a[i+1])
        ans += a[i];
    if(a[i-1]>a[i] && a[i]<a[i+1])
        ans -= a[i];
}
void erases(int i)
{
    if(i==0 || i==n+1)
        return;
    if(a[i-1]<a[i] && a[i]>a[i+1])
        ans -= a[i];
    if(a[i-1]>a[i] && a[i]<a[i+1])
        ans += a[i];
}

int main ()
{
    int t;
    sc(t);
    while(t--)
    {
        int q;
        ans = 0;
        sc2(n,q);
        a[0] = -1,a[n+1] = -1;
        fornt(1,n+1)
        sc(a[i]);
        fornt(1,n+1)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
                ans += a[i];
            if(a[i-1]>a[i] && a[i]<a[i+1])
                ans -= a[i];
        }
        prl(ans);
        while(q--)
        {
            int l,h;
            sc2(l,h);
            erases(l);
            erases(l-1);
            erases(l+1);
            if(l!=h)
            {
                if(h-1!=l && l+1!=h-1)
                    erases(h-1);
                if(l+1!=h)
                    erases(h);
                erases(h+1);
            }
            swap(a[l],a[h]);
            inserts(l);
            inserts(l-1);
            inserts(l+1);
            if(l!=h)
            {
                if(h-1!=l && l+1!=h-1)
                    inserts(h-1);
                if(l+1!=h)
                    inserts(h);
                inserts(h+1);
            }
            prl(ans);
        }
    }

}

