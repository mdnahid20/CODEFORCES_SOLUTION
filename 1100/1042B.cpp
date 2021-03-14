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
#define INF 1000000
using namespace std;

int main ()
{
    int n,i,k;
    int j,l;
    map<string,int>mp;
    mp["A"]=mp["B"]=mp["C"]=INF;
    mp["AB"]=mp["BC"]=mp["AC"]=INF;
    mp["ABC"]=INF;
    sc(n);
    int a[n];
    string s[n];
    fornt(i,0,n)
    {
        sc(a[i]);cin>>s[i];
        sort(s[i].begin(),s[i].end());
        mp[s[i]] = min(mp[s[i]],a[i]);
    }
    int ans = mp["ABC"];
    ans = min(ans,mp["A"]+mp["B"]+mp["C"]);
    ans = min(ans,mp["AB"]+mp["BC"]);
    ans = min(ans,mp["AB"]+mp["C"]);
    ans = min(ans,mp["AB"]+mp["AC"]);
    ans = min(ans,mp["BC"]+mp["A"]);
    ans = min(ans,mp["BC"]+mp["AC"]);
    ans = min(ans,mp["AC"]+mp["B"]);
   if(ans==INF)
    printf("-1\n");
   else
    pr(ans);
}


