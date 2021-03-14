#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#define fornt(i,j,n) for(i=j; i<=n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)

using namespace std;

int main ()
{
    int n,m;
    sc2(n,m);
    int i,p[n],x(0),a[n];
    map<int,int>mp;
    fornt(i,1,n)
    {
        sc(a[i]);
    }for(i=n; i>0; --i)
    {
      if(!mp[a[i]])
      {
          ++mp[a[i]];
          ++x;
          p[i]=x;continue;
      }
      p[i]=x;
    }
    fornt(i,1,m)
    {
        sc(x);
        cout<<p[x]<<endl;
    }
}

