#include<iostream>
#include<map>
#include<vector>
#include<cstdio>
using namespace std;

int main ()
{
    int n,i;
    string s;
    vector<string>v;
    map<string,bool>mp;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=n-1; i>=0; --i)
    {
        if(!mp[v[i]])
        {
            cout<<v[i]<<endl;
            mp[v[i]]=1;
        }
    }
}
