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
#define sp                     << " " <<
#define sl                     << " ";
#define cy                     std :: cout << "YES" << endl;
#define cn                     std :: cout << "NO" << endl;
#define rn                     return;
#define Good_Bye               return 0;
#define gcd(a , b)             __gcd( a , b )
#define lcm(a , b)             ( a * ( b / gcd( a , b ) ) )
#define Faster                 ios_base :: sync_with_stdio( 0 ); cin.tie( 0 ); cout.tie( 0 );

const double eps =             1e-9;
const int inf =                2000000000;
const ll infLL =               9000000000000000000;
const ll MOD =                 1e+7;
const double PI =              3.141592653589793238462643383279;

int dx[] =                     { 0, 0, +1, -1, +1, +1, -1, -1 };
int dy[] =                     { +1, -1, 0, 0, +1, -1, +1, -1 };

///_____________________________________________ L E T ' S  B E G I N ____________________________________________________________
const int mX = 3e5+123;
ll n, p, q, k, ans, l, a[mX], b[mX], c[mX];
mpl mp;


int main()
{
    Faster
    Test
    {
        ll n,c(0),x;
        cin>>n;
        set<ll>st,st2;
        lp(0,i,2*n)
        {
            cin>>x;
            st.insert(x);
        }
        if(st.size()!=n)
        {
            cn;
            continue;
        }
        set<ll>::iterator it=st.begin();
        vector<ll>v;
        v.pb(1);
        v.pb(-1);
        ll k2=*it;
        ll k3=*(++it);
        v.pb(k3-k2);
        v.pb(-(k3-k2));
        while(it!=st.end())
        {
            v.pb(k3-k2);
            v.pb(-(k3-k2));
            k2=k3;
            ++it;
            k3=*it;
        }
        lp(0,i,v.size())
        {
            ll sum(0);
            lp(0,j,v.size())
            {
                sum += (abs(v[i]-v[j]));
            }
            st2.insert(sum);
        }
        set<ll>::iterator it2=st2.begin();
        bool flag=true;
        for(set<ll>::iterator it=st.begin(); it!=st.end(); ++it)
        {
            if(*(it)!=*(it2))
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cy
        else
            cn
    }
    Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

