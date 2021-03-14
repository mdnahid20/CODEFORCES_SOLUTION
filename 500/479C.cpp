#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;


int main ()
{
    int i,n,k(-1);
    scanf("%d",&n);
    pair<int,int>p[n];
    for(i=0; i<n; ++i)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort( p , p+n );
    for(i=0; i<n; ++i)
    {
        if(p[i].second>=k)
            k = p[i].second;
        else
             k = p[i].first;
    }
    printf("%d\n",k);
}
