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
    int t, n, b, c;
    cin>>t;
    while (t--)
    {
        cin>>n;
        b = (n - 1) / 4+1;
        c = n - b;
        fornt(0,c)
        cout<<9;
        fornt(0,b)
        cout<<8;
        cout<<endl;
    }
}
