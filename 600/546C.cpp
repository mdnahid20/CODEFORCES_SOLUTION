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

int dx[] =                     { 0 , 0 , +1 , -1 , +1 , +1 , -1 , -1 };
int dy[] =                     { +1 , -1 , 0 , 0 , +1 , -1 , +1 , -1 };

///_____________________________________________ L E T ' S  B E G I N ____________________________________________________________
const int mX = 3e5+123;
ll n, p, q, k, ans, l, a[mX], b[mX], c[mX];
mpl mp;

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    freopen( "output.txt" , "w" , stdout );
    #endif*/
   // Faster
     li n,k1,k2,x;
     deque<li>a,b;
     cin>>n;
     cin>>k1;
     lp(0,i,k1)
     {
         cin>>x;
         a.push_back(x);
     }
     cin>>k2;
     lp(0,i,k2)
     {
         cin>>x;
         b.push_back(x);
     }
     li c(0);
     while(a.size()!=0 && b.size()!=0)
     {
         if(a.front()>b.front())
         {
             int a1= a.front(),b1=b.front();
             a.push_back(b.front());
             a.push_back(a.front());
             if(a.back()==a1 && b1==b.back())
             {
                 cout<<"-1\n";
                 Good_Bye
             }else{++c;
                 a.pop_front();b.pop_front();
             }
         }else{
             int a1= a.front(),b1=b.front();
             b.push_back(a1);
             b.push_back(b1);
             if(a.back()==a1 && b1==b.back())
             {
                 cout<<"-1\n";
                 Good_Bye
             }else{++c;
                 a.pop_front();b.pop_front();
             }
         }
     }
     if(a.size()==0)
     cout<<c<<" 2\n";
     else
     cout<<c<<" 1\n";
    //Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
