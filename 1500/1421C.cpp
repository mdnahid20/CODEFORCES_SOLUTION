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
    string s;
    cin>>s;
    int p=s.size(),k=p/2;
    int c=k*2-1;
    if(s.size()%2==0)
    {
        fornt(0,k)
        {
           if(s[i]!=s[c])
            break;
           --c;
        }
        if(c+1==k)
        {
            cout<<0<<endl;
            return 0;
        }
    }cout<<"3\n";
    cout<<"R "<<p-1<<endl;
    cout<<"L "<<p<<endl;
    cout<<"L "<<2<<endl;
}

