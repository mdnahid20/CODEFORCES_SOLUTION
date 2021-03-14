#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
#define MAX 1000000000000000000
using namespace std;


const int64_t INF = 1e17;
inline int64_t mul(int64_t a, int64_t b)
{
    return (INF / a > b ? a * b : INF);
}

inline int64_t add(int64_t a, int64_t b)
{
    return (a + b >= INF ? INF : a + b);
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());

    if (n <= 2)
    {
        cout << a[0] - 1 << endl;
    }
    else
    {
        int64_t ans = accumulate(a.begin(), a.end(), 0ll) - n;

        for (int x = 1; ; ++x)
        {
            int64_t curPow = 1, curCost = 0;
            for (int i = 0; i < n; ++i)
            {
                curCost = add(curCost, abs(a[i] - curPow));
                curPow = mul(curPow, x);
            }

            if (curPow == INF || curPow / x > ans + a[n - 1]) break;
            ans = min(ans, curCost);
        }

        cout << ans << endl;
    }
}
