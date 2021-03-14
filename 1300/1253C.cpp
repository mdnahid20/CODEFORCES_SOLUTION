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


int main()
{
   fastread();

    int nbSweets, maxPerDay;
    cin >> nbSweets >> maxPerDay;

    vector<int> val(nbSweets);

    for (int iSweet = 0; iSweet < nbSweets; ++iSweet) {
        cin >> val[iSweet];
    }

    sort(val.begin(), val.end());

    vector<long long> ans(nbSweets);

    long long curSum = 0;

    for (int lastTaken = 0; lastTaken < nbSweets; ++lastTaken) {
        curSum += val[lastTaken];
        ans[lastTaken] = curSum;

        if (lastTaken >= maxPerDay) {
            ans[lastTaken] += ans[lastTaken - maxPerDay];
        }

        cout << ans[lastTaken] << (lastTaken == nbSweets-1 ? '\n' : ' ');
    }

    return 0;
}
