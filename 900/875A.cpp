
#include<iostream>
#include<cstdio>
using namespace std;

int digitsum(int n)
{
    int k=0;
    while(n)
    {
        k+=n%10;
        n/=10;
    }
    return k;
}
int main ()
{
    int n,arr[81];
    scanf("%d",&n);
          int i,c=0;
        for(i=0;  i<=81 && n-i>=0; ++i)
        {
            if(n-i+digitsum(n-i)==n)
            {
                arr[c++]=n-i;
            }
        }
        printf("%d\n",c);
    for(i=c-1; i>=0; --i)
    {
        printf("%d\n",arr[i]);
    }
    }
