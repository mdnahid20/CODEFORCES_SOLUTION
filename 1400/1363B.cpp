
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
    string s;
		cin >> s;
		int suf0 = 0, suf1 = 0;
		for(auto &it:s)
		{
			suf0 += (it == '0');
			suf1 += (it == '1');
		}
		int ans = min(suf0, suf1); //Make whole string 0/1
		int pref0 = 0, pref1 = 0;
		for(auto &it:s)
		{
			pref0 += (it == '0'), suf0 -= (it == '0');
			pref1 += (it == '1'), suf1 -= (it == '1');
			//Cost of making string 0*1*
			ans = min(ans, pref1 + suf0);
			//Cost of making string 1*0*
			ans = min(ans, pref0 + suf1);
		}
		cout << ans << endl;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

