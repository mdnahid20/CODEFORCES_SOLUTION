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

const int N=1e5+100;
const int mod=1e9+7;
ll q_pow(ll a,ll b)
{
	ll ans=1;
	while(b)
	{
		if(b&1)
			ans=ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ans;
}


int main()
{
   fastread();
   ll a,b;
   cin>>a>>b;
   cout<<q_pow(((q_pow(2,b)-1)%mod+mod)%mod,a)<<endl;
}

