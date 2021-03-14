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
    int n,k;
    sc2(n,k);
    int p = 2*k + 1,p2 = n,p3(0);
    int cnt = n/p,cnt2 = n%p;
    int a[cnt+5],ans(0);
    if(cnt2>0 && cnt)
    {
        if(cnt2>=(1+k))
        { p2 -= cnt2; p3 += cnt2;
        cnt2 -= k; a[++ans] = cnt2;}
        else
        {
          p3 += 1+k;a[++ans] = 1;p2 -= (1+k);
        }
    }
    while(p2>0)
    {
        int x = ((2*k)+1);
        if((n-p3)<x)
        {
            cnt2 = n-p3;
            if(cnt2<(k+1))
                a[++ans] = n;
            else
                a[++ans] = p3+ k+1;

            break;
        }else
        {
           a[++ans] = p3 + k + 1;
           p2 -= x; p3 += x;
        }
    }pr(ans);
    fornt(1,ans)
    printf("%d ",a[i]);
    printf("%d\n",a[ans]);
}
