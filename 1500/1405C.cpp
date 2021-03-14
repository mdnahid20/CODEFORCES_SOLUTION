#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main()
{
    fastread();
    int t;
    cin >> t ;
    while ( t--)
    {
        int n,k;
        string s;
        cin >> n >> k >> s ;
        int zer = 0, one = 0 ;
        bool chk = true ;
        for ( int i = 0 ; i < k ; i ++)
        {
            int tmp = - 1 ;
            for ( int j = i ; j < n ; j += k )
            {
                if ( s [ j ]!= '?' )
                {
                    if ( tmp != - 1 && s [ j ] - '0' != tmp )
                    {
                        chk = false ;
                        break ;
                    }
                    tmp = s [ j ] - '0' ;
                }
            }
            if ( tmp  != - 1 )
            {
                ( tmp == 0 ? zer : one ) ++;
            }
        }
        if ( max ( zer, one ) > k / 2 )
        {
            chk = false ;
        }
        cout << ( chk ? "YES \n" : "NO \n" );
    }
}
