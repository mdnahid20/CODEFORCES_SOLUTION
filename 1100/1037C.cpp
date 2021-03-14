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
   int l,i,c(0);
   string s1,s2;
   sc(l);
   cin>>s1>>s2;
   fornt(i,0,l-1)
   {
       if(s1[i]!=s2[i])
       {
           if(s1[i+1]==s2[i+1])
            ++c;
           else if(s2[i]!=s2[i+1])
           {
               swap(s2[i],s2[i+1]);
               ++c;++i;
           }else
           ++c;
       }
   }
   if(s1[l-1]!=s2[l-1])
    ++c;

   pr(c);
}


