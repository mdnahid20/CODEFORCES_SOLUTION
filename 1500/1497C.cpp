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
    ll n;
    cin>>n;
    vector<ll>a(n);
    fornt(0,n)
    cin>>a[i];
    if(n==1)
    {
        cout<<"1 1\n";
        cout<<"0\n";
        cout<<"1 1\n";
        cout<<"0\n";
        cout<<"1 1\n";
        cout<<-a[0]<<endl;
    }
    else
    {
        cout<<"1 1\n";
        cout<<-a[0]<<endl;
        a[0]=0;
        cout<<"2 "<<n<<endl;
        fornt(1,n)
        {
            if(i>1)
                cout<<" ";
            ll len = n-1LL;
            ll val =(a[i]%n)*len;
            a[i]+=val;
            cout<<val;
        }
        cout<<"\n";
        cout<<"1 "<<n<<"\n";
        fornt(0,n)
        {
            if(i>0)
                cout<<" ";
            cout<<-a[i];
        }
        cout<<endl;
    }
}
