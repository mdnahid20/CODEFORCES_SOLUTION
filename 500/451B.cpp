/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/


#include<bits/stdc++.h>
using namespace std;

typedef bool                   boo;
typedef int                    li;
typedef long                   il;
typedef unsigned long          ul;
typedef long long int          ll;
typedef unsigned long long     ull;
typedef double                 dd;
typedef string                 str;

#define vli                    vector < li >
#define vll                    vector < ll >
#define sli                    set < li >
#define sll                    set < ll >
#define pli                    pair < li , li >
#define pll                    pair < ll , ll >
#define vpi                    vector < pair < li , li > >
#define vpl                    vector < pair < ll , ll > >
#define mpl                    map < ll , ll >

#define Test                   ll t; std :: cin >> t; while(t--)
#define input(a , n)           for( int i = 0 ; i < n ; i++ ) std :: cin >> a[i];
#define lp(a , i , b)          for( ll i = a ; i < b ; i++ )
#define rlp(a , i , b)         for( ll i = a; i >= b ; i-- )
#define sz(x)                  x.size()
#define len(z)                 z.begin() , z.end()
#define ci(x)                  std :: cin >> x;
#define co(x)                  std :: cout << x nl;
#define fix(x)                 fixed << setprecision(x)
#define mem(z , l)             memset( z , l , sizeof(z) )
#define MP                     make_pair
#define pb                     push_back
#define F                      first
#define S                      second
#define nl                     << endl;
#define nll                    std :: cout << endl;
#define cy                     std :: cout << "YES" << endl;
#define cn                     std :: cout << "NO" << endl;
#define rn                     return;
#define Good_Bye               return 0;
#define gcd(a , b)             __gcd( a , b )
#define lcm(a , b)             ( a * ( b / gcd( a , b ) ) )
#define Faster                 ios_base :: sync_with_stdio( 0 ); cin.tie( 0 ); cout.tie( 0 );
int dx[] = { -1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int dx1[] = { -1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[] = { -1, 0, 1, -1, 0, 1, -1, 0, 1};

const double eps =             1e-9;
const int inf =                2000000000;
const ll infLL =               9000000000000000000;
const ll MOD =                 1e+7;
const double PI =              3.141592653589793238462643383279;

///_____________________________________________ L E T ' S  B E G I N ____________________________________________________________
bool isSorted(ll a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		if(a[i] > a[i + 1])
			return 0;
	}
	return 1;
}

int main()
{
	Faster
	int n;
	map<ll, int>mp;
	vector<ll>v;
	cin >> n;
	ll a[n + 4],b[n+4];
	lp(0, i, n) {
		cin >> a[i];
		b[i]=a[i];
		mp[a[i]] = i + 1;
	}
	a[n]=inf;
	if(isSorted(a,n)){
		cout <<"yes\n1 1\n";
    	return 0;
	}
	lp(1, i, n + 1)
	{
		if (a[i - 1] > a[i])
			v.pb(a[i - 1]);
		else
		{
			if (v.size())
			{
				v.pb(a[i - 1]);
				reverse(a+mp[v[0]]-1,a+mp[v[v.size()-1]] );
				if(isSorted(a,n)){
					cout << "yes\n";
					cout << mp[v[0]] << " " << mp[v[v.size() - 1]] nl
					     Good_Bye
				}
				else{v.clear();
					int a1=mp[v[0]]-1,b1=mp[v[v.size()-1]]+2;
				lp(a1,i,b1)
				a[i]=b[i];
			}
			}
		}
	}
	cout << "no\n";
	Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||