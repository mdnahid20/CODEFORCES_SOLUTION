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
        int n;
        sc(n);
        int a[n+5],b[n+5];
        fornt(1,n+1)
        sc(a[i]);
        int sum(0),c=0;
        int k=n/4;
        k *= 4;
        for(int i=1;  i<=k; i+=4)
        {
            if((a[i]+a[i+1]+a[i+2]+a[i+3])==1)
            {
                b[++c]=0;
                b[++c]=0;
            }
            else if((a[i]+a[i+2])==0 && ((a[i+1]+a[i+3])==2))
            {
                b[++c]=0;
                b[++c]=0;
            }
            else if(a[i]+a[i+1]+a[i+2]+a[i+3]==3)
            {
                b[++c]=1;
                b[++c]=1;
            }
            else if(a[i]+a[i+2]==2 && a[i+1]+a[i+3]==0)
            {
                b[++c]=0;
                b[++c]=0;
            }
            else
            {
                b[++c]=a[i];
                b[++c]=a[i+1];
                b[++c]=a[i+2];
                b[++c]=a[i+3];
            }
        }
        if(n%4)
        {
            if((a[n-1]+a[n])==1)
                b[++c]=0;
            else
            {
                b[++c]=a[n-1];
                b[++c]=a[n];
            }
        }
        cout<<c<<endl;
        fornt(1,c+1)
        cout<<b[i]<<' ';
        cout<<endl;
    }
}
