/*** In the name of Allah(swt), the most gracious, most merciful.***/
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


int main()
{
    fastread();
    int n,m;
    cin>>n>>m;
    string s[n],ans;
    fornt(i,0,n)
    cin>>s[i];
    map<int,int>mp;
    vector<int>v;
    fornt(i,0,n)
    {
        string s1 = string(s[i].rbegin(),s[i].rend());
        int k(0);
        fornt(j,0,n)
        {
            if((!mp[j] && s1==s[j]) && i!=j)
            {
                ans += s[i];
                v.pb(j);
                mp[j]=1;
                mp[i]=1;
                k=1;
                break;
            }
        }
    }
    fornt(i,0,n)
    {
        string s1 = string(s[i].rbegin(),s[i].rend());
        if(!mp[i] && s1==s[i])
        {
            ans += s[i];
            break;
        }
    }
    for(int k=v.size()-1; k>=0; --k)
        ans += s[v[k]];

    cout<<ans.size()<<endl;
    cout<<ans<<endl;
}



