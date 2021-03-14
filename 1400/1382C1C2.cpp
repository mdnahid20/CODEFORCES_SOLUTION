#include<bits/stdc++.h>
#define fornt(i,n) for(int i=0;i<n;i++)
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
	ll t;
	cin>>t;

	while(t--){
		ll n;
		cin>>n;
		string a,b;
		vector<ll> ans;
		cin>>a>>b;

		for(ll i=1;i<n;i++){
			if(a[i]!=a[i-1]){
				ans.pb(i);
				if(a[0]=='0') a[0]='1';
				else a[0]='0';
			}
		}

		for(ll i=n-1;i>=0;i--){
			if(b[i]!=a[0]){
				ans.pb(i+1);
				if(a[0]=='0') a[0]='1';
				else a[0]='0';
			}
		}
		cout<<ans.size();
		for(ll i=0;i<ans.size();i++) cout<<" "<<ans[i];
		cout<<endl;
	}

	return 0;
}
