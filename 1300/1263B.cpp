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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        map<string,int>mp,mp2;
        cin>>n;
        string s[n];
        fornt(i,0,n)
        {
            cin>>s[i];
            ++mp[s[i]];
        }
        int ans(0);
        fornt(i,0,n)
        {
            if(mp2[s[i]])
            {
                ++ans;
                string s2;
                s2 += '0'+s[i].substr(1,s[i].size());
                int c=0;
                while(mp[s2] || mp2[s2])
                {
                    s2.clear();
                    ++c;
                    s2 += ('0'+c);
                    s2 += s[i].substr(1,s[i].size());
                }
                s[i].clear();
                s[i]+= s2;
            }
            ++mp2[s[i]];
        }
        cout<<ans<<endl;
        fornt(i,0,n)
        cout<<s[i]<<endl;

    }
}

