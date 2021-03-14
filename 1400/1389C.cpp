#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

const int maxn = 2e5 + 7;

char s[maxn];

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        scanf("%s",s + 1);
        int n = strlen(s + 1);
        int ans = n - 2;
        for(int i = 0;i <= 9;i++) {
            for(int j = 0;j <= 9;j++) {
                int now = i;
                int cnt = 0;
                for(int k = 1;k <= n;k++) {
                    if(s[k] - '0' == now) {
                        if(now == i) now = j;
                        else now = i;
                    } else {
                        cnt++;
                    }
                }
                if(now == i) {
                    ans = min(ans,cnt);
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
