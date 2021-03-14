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
using namespace std;

int main ()
{
    int t,i,n;
    sc(t);
    while(t--)
    {
        sc(n);
        int a[150002]= {0},c(0),k(0);
        fornt(i,0,n)
        {
            sc(a[i]);

        }
        k=a[n-1];
          for(i=n-1; i>=0; --i)
        {
            if(k<a[i])
                ++c;
            else
                k=a[i];
        }
        pr(c);
    }
}
