#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define m 100007
#define sizes 1007
using namespace std;

int main ()
{
    string s;
    int n;
    int i,ans(0),c,j;
    int a[sizes],b[sizes],on[sizes];
    sc(n);
    cin>>s;
    for(i=1; i<=n; ++i)
    {
        sc2(a[i],b[i]);
        on[i]=(s[i-1]-'0');
    }
    for(j=0; j<m; ++j)
    {
        c=0;
        for(i=1; i<=n; ++i)
        {
            if(j>=b[i] && ((j%a[i])==(b[i]%a[i])))
                on[i] ^= 1;
            c += on[i];
        }
        ans = max(ans,c);
    }
    pr(ans);
}
