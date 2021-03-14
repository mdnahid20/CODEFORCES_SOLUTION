#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

int main ()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int x,k=1;
    map<int,int> mx,mp;
    for(i=0; i<m; ++i)
    {
        cin>>x;
        mx[x]++;
        mp[mx[x]]++;
        if(mp[k]==n)
        {
            cout<<1;
            ++k;
        }
        else
            cout<<0;
    }
    printf("\n");
    return 0;
}
