#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
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
  char ch;
  map<char,bool>mp;
  int n,m,i;
  ll total(0),part(0);
  sc2(n,m);
  cin>>s;
  fornt(i,0,m)
  {
    cin>>ch;
      mp[ch]=true;
  }
  fornt(i,0,n)
  {
      if(!mp[s[i]])
      {
          total += ((part*(part+1))/2);
          part=0;
      }
      else
      ++part;
  }
  if(part)
    total += ((part*(part+1))/2);

  prl(total);
}



