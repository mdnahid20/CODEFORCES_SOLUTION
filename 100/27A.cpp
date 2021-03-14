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


int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    map<int,int>m;
    cin>>n;
    fornt(0,n)
    {
        cin>>x;
        ++m[x];
    }
    fornt(1,3000+5)
    {
        if(!m[i])
        {
            cout<<i<<endl;
            break;
        }
    }
}

