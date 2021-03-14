#include<iostream>
#include<cstdio>
using namespace std;
int prime[1000]={0},mark[1000]={0},c=0;
void sieve()
{   prime[0]=1;prime[++c]=2;
    for(int i=3; i<1000; i+=2)
    {
        if(mark[i]==0)
        {
            prime[++c]=i;

            for(int j=3; i*j<1000; j+=2)
            {
                mark[i*j]=1;
            }
        }
    }
}
int main ()
{
    int i,j,n,k,val;
    sieve();
    while(cin>>n>>k)
    {int c=0;
        for (i=0;  prime[i]<=n; i++)
        {
            val = prime[i]-1;

            for (j=0; prime[j]<(val/2); j++)
            {
                if(prime[j]+prime[j+1] == val)
                {
                    ++c;
                    break;
                }
            }
    }
     if (c >= k)
            printf("YES\n");
        else
            printf("NO\n");
}}
