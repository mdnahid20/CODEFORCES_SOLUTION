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
#define MAX 1000000000
using namespace std;


int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1],b[n+1];
        fornt(0,n)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        ll m = b[0];
        bool flag=false;
        fornt(0,n)
        {
            if(a[i]!=b[i] && a[i]%m>0)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            prN;
        else
            prY;
    }
}

