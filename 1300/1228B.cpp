/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

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
const ll mod = 1e9 + 7;

int main()
{
    fastread();
    ll r, c, d, ans = 1;
    cin >> r >> c;
    int a[r + 2][c + 2];
    memset(a, -1, sizeof(a[0][0]) * (r + 2) * (c + 2));

    fornt(i,1,r+1)
    {
        cin >> d;
        a[i][d + 1] = 0;
        fornt(j,1,d+1) a[i][j] = 1;
    }
    fornt(i,1,c+1)
    {
        cin >> d;
        if (a[d + 1][i] > 0) return cout << 0 << "\n", 0;
        a[d + 1][i] = 0;

        fornt(j,1,d+1)
        {
            if (a[j][i] == 0) return cout << 0 << "\n", 0;
            a[j][i] = 1;
        }
    }
    fornt(i,2,r+1)
    {
        fornt(j,2,c+1)
        {
            if (a[i][j] == -1) ans = (ans * 2) % mod;
        }
    }
    return cout << ans << "\n", 0;
}
