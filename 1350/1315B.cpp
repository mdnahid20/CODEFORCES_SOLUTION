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
    int a,b,p;
    sc(t);
    while(t--)
    {
        string s;
        vector< pair<int,int> > v;
        sc2(a,b);
        sc(p);
        cin>>s;
        map<char,int>m;
        m['A'] = a;
        m['B'] = b;
        int length = s.size();
        char ch = s[0];
        fornt(0,length-1)
        {
            if(ch != s[i])
            {
                v.pb(make_pair(i+1,m[ch]));
                ch = s[i];
            }
        }
        v.pb(make_pair(length,m[ch]));
        int k = v.size(),index = 1,d;
        for(d=k-1; d>=0; --d)
        {
            p -= v[d].second;
            if(p<0)
            {
                index = v[d].first;
                pr(index);
                break;
            }
        }if(index==1 && d<0)
        {
            pr(index);
        }
    }
}

