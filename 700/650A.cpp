#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#define ll long long
using namespace std;

map<pair<ll,ll>,ll> m;
map<ll,ll> mp[2];


int main()
{
    ll n,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        ll x, y;
        cin>>x>>y;
        mp[0][x]++;
        mp[1][y]++;
        m[{x,y}]++;
    }
    ll ans=0;
    for(i=0; i<2; i++)
    {
        for(map<ll,ll>::iterator it=mp[i].begin(); it!=mp[i].end(); it++)
        {
            ans+=it->second*(it->second-1)/2;
        }
    }
    for(map<pair<ll,ll>,ll>::iterator it=m.begin(); it!=m.end(); it++)
      {
         ans-=it->second*(it->second-1)/2;
      }
    cout<<ans<<endl;
    return 0;
}
