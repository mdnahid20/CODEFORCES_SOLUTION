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


int main ()
{
    fastread();
    ll n, m, num, tc, t = 1;
    cin>>tc;
    while (tc--)
    {
        cin>>num;
        ll arr[num];
        fornt(i,0,num)cin>>arr[i];
        ll dif = 0;
        vector <ll>vc;
        fornt(i,0,num-1)
        {
            if(arr[i] >= 0 && arr[i + 1] >= 0) dif = max(dif, abs(arr[i] - arr[ i + 1]));
            else if(arr[i] == -1 && arr[i + 1] >= 0) vc.pb(arr[i + 1]);
            else if(arr[i] >= 0 && arr[i + 1] == -1) vc.pb(arr[i]);
        }

        if(vc.size())
        {
            sort(vc.begin(),vc.end());
            ll mnn = vc[0];
            ll mxx = vc.back();
            ll mid = (mnn + mxx)/2;
            dif = max(dif, mxx - mid);
            cout << dif << " " << mid << endl;
        }
        else
            cout << dif << " 0" << endl;
    }
}
