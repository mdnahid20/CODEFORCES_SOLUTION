#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<utility>
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
int x[10005]={0},y[10005]={0},n;
map<int,bool>v;
void dfs(int k)
{
    v[k]=true;
    fornt2(1,n+1)
    {
        if(!v[j] && (x[j]==x[k] || y[j]==y[k]))
            dfs(j);
    }
}
int main ()
{
  int k(0);
  sc(n);
  fornt(1,n+1)
  sc2(x[i],y[i]);
  fornt(1,n+1)
  {
      if(!v[i])
      {
          ++k;dfs(i);
      }
  }
  pr(k-1);
}

