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
        string s;
        cin>>s;
        int ans(0);
        map<char,int>mp;
        fornt(0,s.size())
        {
            if(s[i]=='(' || s[i]=='[')
                ++mp[s[i]];
            else if(s[i]==')')
            {
                if(mp['('])
                {
                    --mp['('];
                    ++ans;
                }
            }
            else if(s[i]==']')
            {
                if(mp['['])
                {
                    --mp['['];
                    ++ans;
                }
            }
        }
        cout<<ans<<endl;
    }
}

