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
    int t;
    cin>>t;
    while(t--)
    {
        string T;
        cin>>T;
        map<int,int>mp;
        fornt(0,T.length())
        ++mp[T[i]-'0'];
        if(mp[0]==0 || mp[1]==0)
            cout<<T<<endl;
        else
        {
            int first=T[0]-'0';
            if(first==0)
            {
                fornt(0,T.length())
                cout<<"01";
                cout<<endl;
            }
            else
            {
                fornt(0,T.length())
                cout<<"10";
                cout<<endl;
            }
        }
    }
}

