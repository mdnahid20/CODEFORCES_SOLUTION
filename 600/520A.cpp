#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    int i,lenth,cnt=0,n;
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=97+s[i]-65;
        }
    }
    sort(s.begin(),s.end());
    for(i=0; i<n-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            cnt++;
        }
    }
    if(cnt==25)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
