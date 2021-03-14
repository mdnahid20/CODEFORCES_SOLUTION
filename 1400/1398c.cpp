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
        int n;
        cin>>n;
        cin>>s;
        map<int,int>mp;
        mp[0]=1;
        ll ans(0),sum(0);
        fornt(0,s.size())
        {
            int l = s[i]-'0';
            l--;
            sum +=l;
            ans += (ll)mp[sum];
            mp[sum]++;
        }
        cout<<ans<<endl;
    }
}


