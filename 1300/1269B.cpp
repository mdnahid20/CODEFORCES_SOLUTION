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

typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;


int main() {

    fastread();
    ll n, m, tc, num, t = 1;

    cin>>num>>m;

    vll v1, v2;
    for (ll i = 0; i < num; ++i) {
        cin>>n;
        v1.pb(n);
    }

    for (ll i = 0; i < num; ++i) {
        cin>>n;
        v2.pb(n);
    }

    sort(v2.begin(), v2.end());

    ll ans = 1e+10;
    for (ll i = 0; i < num; ++i) {
        vll temp;
        ll avgmod = (m + v2[i] - v1[0]) % m;
        for (ll j = 0; j < num; ++j) {
            temp.pb((v1[j] + avgmod) % m);
        }
        sort(temp.begin(),temp.end());

        if(v2 == temp){
            ans = min(ans, avgmod);
        }
    }

    cout<<ans<<endl;
}
