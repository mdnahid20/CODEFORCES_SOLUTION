
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


void solve()
{
    int n;
    string s;
    cin>>s;
    n = s.size();
    vector<pair<int,char> >v(3);
    fornt(0,n)
    {
        if(s[i]=='R')
            v[1].first++;
        if(s[i]=='P')
            v[2].first++;
        if(s[i]=='S')
            v[0].first++;
    }v[0].second= 'R';
    v[1].second = 'P';
    v[2].second = 'S';
    sort(v.begin(), v.end() ,greater<>());
    fornt(0,n)
    cout<<v[0].second;
    cout<<endl;
}

int main()
{
   fastread();
   int t;
   cin>>t;
   while(t--){
   solve();

   }
}

