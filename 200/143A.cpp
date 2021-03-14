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

struct node
{
    int a[5];
    int r1,r2,c1,c2,d1,d2;
    void done()
    {
        r2=a[3]+a[4];
        r1=a[1]+a[2];
        d1=a[1]+a[4];
        c1=a[1]+a[3];
        c2=a[2]+a[4];
        d2=a[2]+a[3];
    }
}t[10005];
int b[10];
int ans;
int vis[10];
void dfs(int step)
{
    if(step==4)
    {
        for(int i=0;i<4;i++)
        {
            t[ans].a[i+1]=b[i];
        }
        t[ans].done();
        ans++;
        return ;
    }
    for(int i=1;i<10;i++)
    {
        if(!vis[i])
        {
            b[step]=i;
            vis[i]=1;
            dfs(step+1);
            vis[i]=0;
        }
    }
}
int main()
{
    memset(vis,0,sizeof(vis));
    ans=0;
    dfs(0);
    int r1,r2,c1,c2,d1,d2,tag=0;
    scanf("%d%d%d%d%d%d",&r1,&r2,&c1,&c2,&d1,&d2);
    for(int i=0;i<ans;i++)
    {
        if(t[i].r1==r1&&t[i].r2==r2&&t[i].c1==c1&&t[i].c2==c2&&t[i].d1==d1&&t[i].d2==d2)
        {
            printf("%d %d\n",t[i].a[1],t[i].a[2]);
            printf("%d %d\n",t[i].a[3],t[i].a[4]);
            tag=1;
            break;
        }
    }
    if(!tag)
        printf("-1\n");
    return 0;
}

//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||