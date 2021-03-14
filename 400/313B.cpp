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

using namespace std;

int main ()
{
   string s;
   int m,sizes,k(0),i;
   map<int,int>mp;
   cin>>s;
   sc(m);
   int a[m],b[m];
   fornt(i,0,m)
   sc2(a[i],b[i]);
   sizes = s.size();
   fornt(i,0,sizes-1)
   {
       if(s[i]==s[i+1])
        ++k;
       mp[i+1]=k;
   }
   fornt(i,0,m)
   {
      int high=mp[b[i]-1];
      int low=mp[a[i]-1];
      int ans=high-low;
      pr(ans);
   }
}


