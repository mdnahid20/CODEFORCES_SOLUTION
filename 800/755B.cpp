#include<iostream>
#include<cstdio>
#include<set>
#define ll long long
using namespace std;

int main ()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    string k;
    set<string>s;
    for(i=0; i<n+m; ++i)
    {
        cin>>k;
        s.insert(k);
    }
    if((n+m-s.size())>0)
    {
        ll p=n+m-s.size();
        n += (p/2)+(p%2)-p;
        m += (p/2)-p;
    }
    if(n>m)
    printf("YES\n");
    else
    printf("NO\n");
}
