#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main ()
{
    int t ,i;
    scanf("%d",&t);
    while(t--)
    {
        double n,p,q;
        scanf("%lf",&n);
        if(n>=1 && n<=3)
          {
              printf("N\n");continue;
          }
        else
        p = (n+sqrt(n*n-4.0*n))/2.0;
        q = (n-sqrt(n*n-4.0*n))/2.0;
        printf("Y %.9lf %.9lf\n",p,q);
    }
}
