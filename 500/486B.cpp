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

const double eps =             1e-9;
const int inf =                2000000000;
const ll infLL =               9000000000000000000;
const ll MOD =                 1e+7;
const double PI =              3.141592653589793238462643383279;
const int mX = 300;
///_____________________________________________ L E T ' S  B E G I N ____________________________________________________________
int r,c;
int a[mX][mX],b[mX][mX],cd[mX][mX];

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    freopen( "output.txt" , "w" , stdout );
    #endif */

    Faster
    cin>>r>>c;
    lp(0,i,r)
    {
        lp(0,j,c)
        {
            cin >> b[i][j];
            a[i][j] = 1;
            cd[i][j] = 0;
        }
    }
    lp(0,i,r)
    {
        lp(0,j,c)
        {
            if(!b[i][j])
            {
                lp(0,k,c)
                a[i][k]=0;
                lp(0,k,r)
                a[k][j]=0;
            }
        }
    }
    lp(0,i,r)
    {
        lp(0,j,c)
        {
            if(a[i][j])
            {
                lp(0,k,c)
                cd[i][k]=1;
                lp(0,k,r)
                cd[k][j]=1;
            }
        }
    }
    lp(0,i,r)
    {
        lp(0,j,c)
        {
            if(b[i][j] != cd[i][j])
            {
                cn
                Good_Bye
            }
        }
    }
    cy
    lp(0,i,r)
    {
        lp(0,j,c)
        cout<<a[i][j]<<' ';
        nll
    }
    Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||



