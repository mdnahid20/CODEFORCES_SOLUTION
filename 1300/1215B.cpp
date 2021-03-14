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
    ll n;
    cin>>n;
    ll a[n];
    fornt(i,0,n)
    cin>>a[i];
    ll cnt1 = 0, cnt2 = 0;
    ll bal = 0,ansP = 0;
    for (ll i = 0; i < n; i++)
    {
        if (bal % 2 == 0)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        if (a[i] < 0)
        {
            bal++;
        }
        if (bal % 2 == 0)
        {
            ansP += cnt1;
        }
        else
        {
            ansP += cnt2;
        }
    }
    cout << n *(ll) (n + 1) / 2 - ansP << ' ' << ansP << endl;
}



