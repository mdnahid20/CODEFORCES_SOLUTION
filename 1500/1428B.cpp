#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool a = false,b=false;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '<') a= true;
            else if(s[i] == '>') b = true;
        }
        if(a && b)
        {
            int ans = 0;
            s += s[0];
            for(int i = 0; i < n; i++)
            {
                if(s[i] == '-' || s[i+1] == '-') ans++;
            }
            cout << ans << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
}
