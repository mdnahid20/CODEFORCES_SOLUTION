#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    if(n==k)
        cout<<"-1"<<endl;
    else
    {
        cout<<n-k<<' ';
        for(i=1; i<n-k; i++)
            cout<<i<<' ';
        for(i=n-k+1; i<=n; i++)
            cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
