#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
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
using namespace std;


int main ()
{
    int t;
    sc(t);
    while(t--)
    {
        int n,q;
        sc2(n,q);
        int a[n+5];
        fornt(0,n)
        sc(a[i]);
        int c=1;
        ll ans(0);
        vector<int>v;
        v.push_back(a[0]);
        fornt(1,n)
        {
            int k = v.size()-1;
            if(c)
            {
                if(v[k]<a[i])
                {
                    v.pop_back();
                    v.pb(a[i]);
                }
                else
                {
                    v.pb(a[i]);
                    c=0;
                }
            }
            else
            {
                if(v[k]>a[i])
                {
                    v.pop_back();
                    v.pb(a[i]);
                }
                else
                {
                    v.pb(a[i]);
                    c=1;
                }
            }
        }int k =v.size();
         for(int i=0; i<k; i+=2)
            ans+=v[i];
        if(k%2==0)
        --k;
        for(int i=1; i<k; i+=2)
        ans-=v[i];
        prl(ans);
    }
}

