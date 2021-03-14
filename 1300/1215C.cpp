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
    int n;
    cin>>n;
    string s,t;
    cin>>t>>s;
    vector<pair<int,int > >vp;
    fornt(i,0,n)
    {
        if(s[i]!=t[i])
        {
            int c(0);
            fornt(j,i+1,n)
            {
                if(s[j]!=t[j] && t[i]!=s[j])
                {
                    swap(t[i],s[j]);
                    vp.pb(make_pair(i+1,j+1));
                    c=1;
                    break;
                }
            }
            if(!c)
            {
                fornt(j,i+1,n)
                {
                    if(s[j]!=t[j])
                    {
                        swap(t[i],s[i]);
                        vp.pb(make_pair(i+1,i+1));
                        swap(t[j],s[i]);
                        vp.pb(make_pair(j+1,i+1));
                        c=1;
                        break;
                    }
                }
            }
            if(!c)
            {
                cout<<"-1\n";
                return 0;
            }
        }
    }
    cout<<vp.size()<<endl;
    fornt(i,0,vp.size())
    cout<<vp[i].first<<" "<<vp[i].second<<endl;
    cout<<endl;
}




