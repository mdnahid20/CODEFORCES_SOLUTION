#include<iostream>
#include<cstdio>
using namespace std;
int a[10][1000001];

int f(int n)
{
    int m=1;
    while(n)
    {
        if(n%10)
        {
            m *= (n%10);
        }
        n /=10;
    }
    return m;
}
int g(int n)
{
    if(n<10)
        return n;

    return g(f(n));
}
int main ()
{
    int n,c,l;
    int r,k,i,j;
    for(i=1; i<10; i++)
    {
        c=0;
        for(j=1; j<1000001; j++)
        {
            if(g(j)==i)
            {
                c++;
            }
            a[i][j]=c;
        }
    }
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&l,&r,&k);
        printf("%d\n",a[k][r]-a[k][l-1]);
    }
    return 0;
}
