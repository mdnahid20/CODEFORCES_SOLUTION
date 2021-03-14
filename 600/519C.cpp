#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int t=0;
   while (n > 0 && m > 0)
    {
        if (n == 1 && m == 1)
            break;
        if (n < m)
            n--, m -= 2;
        else
            n -= 2, m--;
        t++;
    }
    printf("%d\n",t);
}
