#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define M 100009
using namespace std;

int main ()
{
    ll n,m,l,r,t,i;
    scl(n);
    ll a[n],srt[n],b[n],srtsum[n];
    fornt(i,0,n)
    {
        scl(a[i]);
        srt[i]=a[i];
    }
    sort(srt,srt+n);
    b[0]=a[0],srtsum[0]=srt[0];
    for(i=1; i<n; ++i)
    {
        srtsum[i] = srtsum[i-1]+srt[i];
        b[i] = b[i-1]+a[i];
    }
    scl(m);
    fornt(i,0,m)
    {
        scl(t);
        scl2(l,r);
        --l,--r;
        if(t==1)
            cout<<(b[r]-b[l]+a[l])<<endl;
        else
            cout<<(srtsum[r]-srtsum[l]+srt[l])<<endl;
    }
}



