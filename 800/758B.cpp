#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main ()
{
    int n,i;
    string s,s2;
    map<char,int > m;
    cin>>s;
    n=s.size();
    int d(0);
    for(i=0; i<n; ++i)
    {
        if(s[i]!='!')
        {
            s2[d]=s[i];
        }
        ++d;
        if(d==4)
            d=0;
    }
    d=0;
    for(i=0; i<n; ++i)
    {
        if(s2[d]!=s[i])
            ++m[s2[d]];

        ++d;
        if(d==4)
            d=0;
    }
    cout<<m['R']<<" "<<m['B']<<" "<<m['Y']<<" "<<m['G']<<endl;
}
