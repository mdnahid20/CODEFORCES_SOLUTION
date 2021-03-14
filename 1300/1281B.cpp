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
void solve()
{
    ll n, m, tc, num, t = 1;


    string aa, cc;
    cin >> aa >> cc;

    ll ln  = aa.length();
    ll ln2 = cc.length();


    if(aa < cc)
    {
        cout << aa << endl;
        return;
    }

    bool ok = false;
    for (ll i = 0; i < ln; ++i)
    {
        for (ll j = i + 1; j < ln; ++j)
        {
            if(aa[i] == aa[j]) continue;
            swap(aa[i], aa[j]);
            if(aa < cc)
            {
                ok = true;
                break;
            }
            swap(aa[i], aa[j]);
        }
        if(ok) break;
        if(i < m && aa[i] > cc[i])break;
        else if(i >= ln2)break;
    }

    if(ok) cout << aa << endl;
    else cout << "---" << endl;
}


int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


