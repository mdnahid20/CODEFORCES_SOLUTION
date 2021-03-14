#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#include<math.h>
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


const int N = 1e5 + 5;
int t, n, a[N];
int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
       int k = 0;
        while(k < n && a[k] == 1) {
            k++;
        }
        cout << ((k == n) ^ (k % 2) ? "Second" : "First") << '\n';
    }
}
