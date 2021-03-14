#include<iostream>
#include<cstdio>
using namespace std;


int n,sum(0);
int main()
{
    scanf("%d",&n);
    sum=n;
    for(int i=2; i*i<=n; i++)
        while(n%i==0)
            n/=i,sum+=n;

    sum+=n>1;
    printf("%d\n",sum);

}
