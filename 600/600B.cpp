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
using namespace std;

int main ()
{
  ll n,m;
  scl2(n,m);
  ll i,j,x;
  vector < ll > a,b;
  fornt(i,0,n)
  {
      scl(x);
      a.pb(x);
  }
  fornt(i,0,m)
  {
      scl(x);
      b.pb(x);
  }
  sort(a.begin(), a.end());
  ll ans;
  vector<ll>::iterator lower,upper;
  fornt(i,0,m)
  {
      lower = upper_bound (a.begin(), a.end(), b[i]);
      cout<<(lower- a.begin())<<' ';
  }cout<<endl;
}
