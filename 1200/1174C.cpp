#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main ()
{
    int i,n;
    int a[200007],j;
    memset(a,0,sizeof(a));
    scanf("%d",&n);
    int k=1;
    for(i=2; i<=n; ++i)
    {
        if(a[i])continue;
        a[i]=k++;
        for(j=i*2; j<=n; j+=i)
        {
            a[j]=a[i];
        }
    }
     for(i=2; i<=n; ++i)
    {
        cout<<a[i]<<' ';
    }cout<<endl;
}
