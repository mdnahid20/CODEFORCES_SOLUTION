/*** Alhamdulillah for Everything ***/

#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
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
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>mp1,mp2;
    fornt(i,0,s1.size())
    {
        ++mp1[s1[i]];
        ++mp2[s2[i]];
    }
    for(map<char,int>::iterator it=mp1.begin(); it!=mp1.end(); ++it)
    {
        if(mp2[it->first])
        {
            prY;
            return;
        }
    }
    prN;
}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}




