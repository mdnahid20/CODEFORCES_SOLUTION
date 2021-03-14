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

int main()
{
	Faster
	int r, c;
	vpi vp;
	cin >> r >> c;
	string s[r];
	lp(0, i, r)
	cin >> s[i];
	lp(0, i, r)
	{
		rlp(c - 1, j, 0) {
			if (s[i][j] == 'G') {
				cout << "-1\n";
				Good_Bye
			} else if (s[i][j] == 'S')
				break;
		}
	}lp(0, i, r)
	{int a(0),b(0);
		lp(0, j, c) {
	    if(s[i][j]=='G' && !a)
	    	a = j+1;
	    else if((s[i][j]=='S' && a) && !b)
	    {
	    	b=j+1;
	    	vp.pb(MP(a,b));a=b=0;
	    }
	    }
	}  set<int>st;
	    lp(0,i,vp.size())
	    st.insert(vp[i].S-vp[i].F-1);
        cout<<st.size() nl
	Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||