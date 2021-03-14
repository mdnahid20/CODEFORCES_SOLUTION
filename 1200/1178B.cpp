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
    cin>>s;
    ll i,c(0),n=s.size();
    ll result(0),m[n],m2[n];
    fornt(i,1,n)
    {
        if(s[i]=='v' && s[i-1]=='v') c++;

        m[i] = c;
    }
    c=0;
    for(i=n-1; i>0; --i)
    {
        if(s[i]=='v' && s[i+1]=='v') c++;

        m2[i] = c;
    }
    fornt(i,0,n)
    {
        if(s[i]=='o')
        {
            result += (m[i-1]*m2[i+1]);
        }
    }
    prl(result);
}
