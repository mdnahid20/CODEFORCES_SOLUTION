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
    int t,i,j,n;
    sc(t);
    while(t--)
    {
        sc(n);
        vector<int>v;
        map<int,int>mp;
        int a,ans=0,k=0;
        fornt(i,0,n)
       {
           sc(a);
           ++mp[a];
           if(mp[a]==1)
            v.push_back(a);
       }
        sort(v.begin(),v.end());
        for(i=0; i<v.size(); ++i)
        {
            ans += ((k+mp[v[i]])/v[i]);
            k =(k+mp[v[i]])%v[i];
        }
        pr(ans);
    }
}
