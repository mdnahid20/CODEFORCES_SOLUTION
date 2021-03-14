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

int output(int i,int j)
{
    cout<<"? "<<i+1<<' '<<j+1<<endl;
    int k;
    sc(k);
    return k;
}
int main ()
{
    int n;
    sc(n);
    int c(0),ans[n+5];
    fornt(1,n)
    {
        int a = output(c,i);
        int b = output(i,c);
        if(a>b)
        {
            ans[c] = a;
            c = i;
        }
        else
            ans[i] = b;
    }
    ans[c] = n;
    cout<<"! ";
    fornt(0,n)
    cout<<ans[i]<<' ';
    cout<<endl;
}

