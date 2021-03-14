#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int i,n,m;
    scanf("%d %d",&n,&m);
    int p(0),a[m],c(2);
    int k=(m+1)/2;
    a[1]=k;
    if((m+1)!=2*k)
    {
        c=3,p=1;
    }
    for(i=k-1; i>0; --i)
    {
        a[c]=i;
        c+=2;
    }
    c=3;
    if(m==2 || p)
        c=2;
    for(i=k+1; i<=m; ++i)
    {
        a[c]=i;
        c+=2;
    }
    while(n>0)
    {
        m=min(n,m);
        n-=m;
        for(i=1; i<=m; ++i)
        {printf("%d\n",a[i]);}
    }
}
