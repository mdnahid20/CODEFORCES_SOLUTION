#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define ll long long
#define pb push_back
using namespace std;

int main ()
{
    string s;
    cin>>s;
    ll i;
    vector<ll>left,right;
    for(i=0; i<s.size(); ++i)
    {
        if(s[i]=='l')
        {
            left.pb(i+1);
        }
        else
        {
            right.pb(i+1);
        }
    }
    reverse(left.begin(),left.end());
    for(i=0; i<right.size(); ++i)
    {
        printf("%lld\n",right[i]);
    }
    for(i=0; i<left.size(); ++i)
    {
         printf("%lld\n",left[i]);
    }
}
