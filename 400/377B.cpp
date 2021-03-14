#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;

int gcd(int a, int b)
{
    int c = a % b;
    while(c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ansa, ansb;
    if(b*c>=a*d)
    {
        ansa = b*c - a*d;
        ansb = b*c;
    }
    else
    {
        ansa = a*d - b*c;
        ansb = a*d;
    }

    int ansc = gcd(ansa, ansb);

    cout<<ansa/ansc<<"/"<<ansb/ansc;
}

