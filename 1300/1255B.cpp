#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int j=p; j<n; ++j)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define pry printf("YES\n")
#define prn printf("NO\n")
using namespace std;

int main ()
{
  int t;
  sc(t);
  while(t--)
  {
      int n,m;
      sc2(n,m);
      int a[n+1];
      ll sum(0);
      fornt(1,n+1)
      {
          sc(a[i]);
          sum += a[i];
      }if(n<=2 || m<n)
      {
          pr(-1);continue;
      }
      sum *= 2;
      prl(sum);
      fornt(1,n)
      printf("%d %d\n",i,i+1);

      printf("%d 1\n",n);
  }
}


