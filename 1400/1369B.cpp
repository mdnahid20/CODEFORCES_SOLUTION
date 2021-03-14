#include<bits/stdc++.h>
#define fornt(i,n) for(int i=0;i<n;i++)
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
        cin >> n;
        string s;
        cin >> s;
        int sw = 1;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] < s[i-1])sw = 0;
        }
        if(sw)
        {
            cout << s << '\n';
            continue;
        }
        string ans;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')break;
            ans.push_back('0');
        }
        ans.push_back('0');
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(s[i] == '0')break;
            ans.push_back('1');
        }
        cout << ans << '\n';
    }
}

