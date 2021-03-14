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
const int mxn =                    2000;
///_____________________________________________ L E T ' S  B E G I N ____________________________________________________________
struct node1
{
	int id,num,pay;
}a[mxn];
struct node2
{
	int id,capacity;
	bool vis;
}b[mxn];
bool cmp(node1 a,node1 b)
{
  return (a.pay>b.pay || (a.pay==b.pay && a.num<b.num));
}
bool cmp2(node2 a,node2 b)
{
	return a.capacity<b.capacity;
}
int main()
{
   Faster
   int n;
    cin>>n;
    lp(1,i,n+1)
    {cin>>a[i].num>>a[i].pay;
    	a[i].id=i;
    }
    int k;
    cin>>k;
    lp(1,i,k+1)
    {cin>>b[i].capacity;b[i].id=i;b[i].vis=0;}
    int ans1[n],ans2[n],c(0);
    ll sum(0);
    sort(a+1,a+n+1,cmp);
    sort(b+1,b+k+1,cmp2);
    lp(1,i,n+1)
    {
    	int cnt=0;
    	lp(1,j,k+1)
    	{
    		if(!b[j].vis && b[j].capacity>=a[i].num)
    		{
    			b[j].vis=1;
    			ans2[c]=b[j].id;
                ++cnt;
                break;
    		}
    	}if(cnt)
    	{
    		ans1[c]=a[i].id;
    		++c;
    		sum += a[i].pay;
    	}
    }
    cout<<c<<" "<<sum<<endl;
    lp(0,i,c)
    cout<<ans1[i]<<" "<<ans2[i]<<endl;
    Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||