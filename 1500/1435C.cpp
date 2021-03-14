#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout<<#x<<":\t"<<x
const int N = 2e6 + 10;
const int INF = 0x3f3f3f3f;
int a[10];
int n;
int b[N];
int L,R;
typedef pair<int,int>pii;
int m;
int ans=INF;
pii c[N];
int vis[N],cnt;
int main(){
    for(int i=1;i<=6;i++)scanf("%d",&a[i]);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&b[i]);
    if(n==1){puts("0");return 0;}
    for(int i=1;i<=n;i++)for(int j=1;j<=6;j++){
        c[++m]=pii(b[i]-a[j],i);
    }
    sort(c+1,c+m+1);
    L=1;
    vis[c[1].second]=1;
    cnt=1;
    for(int i=2;i<=m;i++){
        vis[c[i].second]++;
        if(vis[c[i].second]==1)cnt++;
        while(vis[c[L].second]>1){
            vis[c[L].second]--;
            L++;
        }
        if(cnt==n)ans=min(ans,c[i].first-c[L].first);
    }
    printf("%d\n",ans);
    return 0;
}
