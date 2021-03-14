#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
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
typedef long long ll;
using namespace std;


int main ()
{
  int t;
  sc(t);
  while(t--){
    ll x,y,k;
    scl2(x,y);scl(k);
    ll sneed = k;
    sneed += (y*k)-1;
    ll ans(0);
    ans += ((sneed/(x-1))+ min((sneed%(x-1)),1ll));
    ans += k;
    prl(ans);
  }
}

