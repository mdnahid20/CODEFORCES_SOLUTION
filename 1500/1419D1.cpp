#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#include<math.h>
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
    int n;
    sc(n);
    ll a[n+5],b[n+5];
    fornt(1,n+1)
    scl(a[i]);
    if(n<3)
    {
        cout<<0<<endl;
        fornt(1,n+1)
        cout<<a[i]<<' ';
        cout<<endl;
        return 0;
    }
    sort(a+1,a+n+1);
    int c=n/2;
    if(n%2==0)
    --c;
    pr(c);
    int k = c+1,d(0);
    c=1;
    fornt(1,n)
    {
        if(c)
        {
            cout<<a[k]<<' ';
            c=0;
            ++k;
        }
        else
        {
            cout<<a[++d]<<' ';
            c=1;
        }
    }
    cout<<a[k]<<endl;
}
