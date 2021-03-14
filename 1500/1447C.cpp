#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;
typedef long long ll;
const int maxn = 2e5 + 7;
const int INF = 0x3f3f3f3f;
int n;
struct Node {
    int id;
    ll v;
}a[maxn];
int cmp(Node a,Node b){
    return a.v < b.v;
}
int main() {
    int T;scanf("%d",&T);
    while(T--) {
        ll w;
        scanf("%d%lld",&n,&w);
        ll l = ceil((double(w) / 2)),r = w;
        int res = 0;
        for(int i = 1;i <= n;i++) {
            scanf("%lld",&a[i].v);
            a[i].id = i;
            if(a[i].v <= r && a[i].v >= l) {
                res = i;
            }
        }
        if(res) {
            printf("1\n%d\n",res);
            continue;
        }
        sort(a + 1,a + 1 + n,cmp);
        vector<int>ans;
        ll sum = 0;
        for(int i = 1;i <= n;i++) {
            sum += a[i].v;
            ans.push_back(a[i].id);
            if(sum <= r && sum >= l) {
                break;
            }
        }
        if(sum <= r && sum >= l) {
            printf("%d\n",ans.size());
            for(int i = 0;i < ans.size();i++) {
                printf("%d ",ans[i]);
            }
            printf("\n");
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
