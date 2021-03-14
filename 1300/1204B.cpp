#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int n,l,r;
    scanf("%d %d %d",&n,&l,&r);
    int k=1,c;
    int minimum=0,maximum=0;
    if(l==1)
    {
        minimum+=(n*1);
    }
    else if(l>1)
    {
        --l;
        c=l;
        while(l--)
        {
            k=k*2;
            minimum+=k;
        }
        k=1;
        c=n-c;
        minimum+=(c*1);
    }
    if(r==1)
    {
       maximum+=(n*1);
    }
    else if(r>1)
    {
        --r;
        c=r;
        while(r--)
        {
            k=k*2;
            maximum+=k;
        }
        c=n-c-1;
        maximum+=(c*k)+1;
    }
    printf("%d %d\n",minimum,maximum);
}
