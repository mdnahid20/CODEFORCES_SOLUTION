#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main ()
{
    int n,k;
    string s;
    scanf("%d %d",&n,&k);
    cin>>s;
    int p(0),l=k,i;
    map<char,int>mp;
    for(i=0; i<n; ++i)
    {
        if(!mp[s[i]])
        {
            --l;
            mp[s[i-1]]==0;
        }
        if(mp[s[i-1]]>1 && !mp[s[i]])
        {
            ++l;
            mp[s[i-1]]=0;
        }
        if(l<0)
        {
            printf("YES\n");
            return 0;
        }
        ++mp[s[i]];
    }
    printf("NO\n");
}
