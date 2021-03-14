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

int main()
{
    int t;
    sc(t);
    while(t--)
    {
        int n;
        sc(n);
        int id[n+5],a[n+5];
        memset(id,0,sizeof(id));
        set<int> m;
        vector<int>ans;
        fornt(1,n+1)
        {
            sc(a[i]);
            id[a[i]]++;
        }
        fornt(0,n+1)
        {
            if(!id[i]) m.insert(i);
        }

        int mx=n;
        while(1)
        {
            int mex=*m.begin();
            m.erase(m.begin());
            id[mex]++;
            if(mex!=mx)
            {
                id[a[mex+1]]--;
                if(!id[a[mex+1]]) m.insert(a[mex+1]);
                a[mex+1]=mex;
                ans.pb(mex+1);
            }
            else
            {
                if(!mex) break;
                mx--;
                id[a[mex]]--;
                if(!id[a[mex]]) m.insert(a[mex]);
                a[mex]=mex;
                ans.pb(mex);
            }
            if(!mx) break;
        }

        cout<<ans.size()<<endl;
        fornt(0,ans.size())
        cout<<ans[i]<<' ';
        cout<<endl;
    }

    return 0;
}

