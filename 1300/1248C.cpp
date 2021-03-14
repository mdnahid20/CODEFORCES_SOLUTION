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

ll fib[1000010], n, m, mod = 1000000007;
int main()
{
   fastread();
   cin>>n>>m;
   fib[0] = 1;
	fib[1] = 1;
	fornt(i,2,100001) {
		fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
	}
	cout<<((fib[n] + fib[m] - 1) * 2) % mod<<endl;
}

