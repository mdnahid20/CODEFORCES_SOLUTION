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
#define cy                     std :: cout << "Yes\n";
#define cn                     std :: cout << "No\n";
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

///_____________________________________________ L E T ' S  B E G I N ____________________________________________________________

int r,c;
str s[100];
bool visited[51][51],findsycle=false;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
void dfs(int x,int y,int plusx,int plusy,char colour)
{

    if(x < 0 || x >= r || y < 0 || y >= c)
        return;
    if(s[x][y] != colour)
        return;
    if(visited[x][y])
    {
        findsycle = true;
        return;
    }visited[x][y]=true;
    lp(0,i,4)
    {
       int x1=x+dx[i];
       int y1=y+dy[i];
       if(x1 == plusx &&  y1== plusy) continue;
       dfs(x1 , y1 , x , y , colour);
    }
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    freopen( "output.txt" , "w" , stdout );
    #endif */

    Faster
    cin>>r>>c;
    lp(0,i,r)
    cin>>s[i];
    lp(0,i,r)
    {
        lp(0,j,c)
        {
            if(!visited[i][j])
               dfs(i , j , -1 , -1 , s[i][j]);
        }
    }
    if(findsycle)
    cy
   else
    cn
    Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||






