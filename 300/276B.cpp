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
#define rlp(a , i , b)         for( ll i = a; i > = b ; i-- )
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
int dx[]={-1, 0, 0, 1};
int dy[]={0, -1, 1, 0};
int dx1[]={-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[]={-1, 0, 1, -1, 0, 1, -1, 0, 1};             

const double eps =             1e-9;
const int inf =                2000000000;
const ll infLL =               9000000000000000000;
const ll MOD =                 1e+7;
const double PI =              3.141592653589793238462643383279;

///_____________________________________________ L E T ' S  B E G I N ____________________________________________________________

int main()
{
   Faster
    str s;
    cin>>s;
   	map<char,int>mp;
   	set<char>st;
   	lp(0,i,s.size())
    {++mp[s[i]];st.insert(s[i]);}
    while(true)
    {
    	int k1(0),k2(0);
    	for(set<char>::iterator it= st.begin(); it!=st.end(); ++it)
    	{
    		int p=mp[*it];
    		if(p%2)
    		{
    		++k1;	
    		}if(k1>=2)
    		{
    			if(p==1)
    			{
    				st.erase(it);
    				mp[*it]=0;
    			}else
    			mp[*it]=(p-1);
    			break;
    		}
    	}if(k1==1 || !k1)
    	{cout<<"First\n";return 0;}
    	for(set<char>::iterator it= st.begin(); it!=st.end(); ++it)
    	{
    		int p=mp[*it];
    		if(p%2)
    		{
    		++k2;	
    		}if(k2>=2)
    		{
    			if(p==1)
    			{
    				st.erase(it);
    				mp[*it]=0;
    			}else
    			mp[*it]=(p-1);
    			break;
    		}
    	}if(k2==1 || !k2)
    	{cout<<"Second\n";return 0;}
    }
    Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||