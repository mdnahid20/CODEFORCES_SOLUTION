#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int c=0;
    while(n!=m)
    {
        if(m>n)
        {
            if(m%2==0)
            {
                m/=2;c++;
            }
            else
            {
                m++;c++;
            }
        }
        else if(n>m)
        {
            c+=(n-m);m=n;
        }
    }
    printf("%d\n",c);
    return 0;
}
