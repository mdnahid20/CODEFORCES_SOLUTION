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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int>v;
        int c(0),ans(0);
        fornt(0,s.size()+1)
        {
            if(s[i]=='1')
                ++c;
            else
            {
                v.pb(c);
                c=0;
            }
        }sort(v.begin(),v.end(),greater<int>());
        for(int i=0; i<v.size(); i+=2)
            ans += v[i];
        cout<<ans<<endl;
    }
}


