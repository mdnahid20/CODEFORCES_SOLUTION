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
    int T;
    cin>>T;
    while(T--)
    {
        string s,t;
        int n;
        vector<int> v;
        cin >> n >> s >> t;
        fornt(i,0,n)
        {
            if(s[i]!=t[i])
                v.emplace_back(i);
        }
        int cnt=v.size();
        if(cnt!=2)
            cout << "No" << endl;
        else
        {
            swap(s[v[0]],t[v[1]]);
            if(s==t) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
