#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;

map<ll,bool>vis;
const int N=2e5+100;
ll sum[N];
int main()
{
    fastread();

        int n;
        scanf("%d",&n);
        vis[0]=true;//sum[0]=0
        for(int i=1; i<=n; i++)
        {
            int num;
            scanf("%d",&num);
            sum[i]=sum[i-1]+num;
        }
        ll ans=0;
        int l=0,r=1;
        while(r<=n)
        {
            while(vis[sum[r]])
            {
                vis[sum[l]]=false;
                l++;
            }
            vis[sum[r]]=true;
            ans+=r-l;
            r++;
        }
        printf("%lld\n",ans);
}
