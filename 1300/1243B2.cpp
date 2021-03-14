/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("Yes\n")
#define prn printf("No\n")
using namespace std;

string s,t;
int n;
void solve()
{
    map<char,int>mp;
    fornt(i,0,n)
    {
        ++mp[s[i]];
        ++mp[t[i]];
    }

    for(char k='a'; k<='z'; ++k)
    {
        if((mp[k]%2))
        {
            prn;
            return;
        }
    }
    vector<pair<int,int> > vp;
    fornt(i,0,n)
    {
        if(s[i]!=t[i])
        {
            fornt(j,i+1,n)
            {
                if(s[j]==s[i])
                {
                    vp.pb(make_pair(j+1,i+1));
                    swap(s[j],t[i]);
                    break;
                }
                else if(s[i]==t[j])
                {
                    vp.pb(make_pair(i+1+1,j+1));
                    swap(s[i+1],t[j]);
                    vp.pb(make_pair(i+1+1,i+1));
                    swap(s[i+1],t[i]);
                    break;
                }
            }
        }
    }
    pry;
    cout<<vp.size()<<endl;
    fornt(i,0,vp.size())
    cout<<vp[i].first<<" "<<vp[i].second<<endl;

}

int main()
{
    //fastread();
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        s.clear();
        t.clear();
        cin>>s>>t;
        solve();
    }
}




