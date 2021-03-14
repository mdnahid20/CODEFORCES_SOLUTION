#include<iostream>
#include<cstdio>
using namespace std;

int cnst[100005]={0};

void sieve()
{
    for(int i=4; i<=100005; i+=2)
         cnst[i]=1;

    for(int i=3; i<100005; i+=2)
    {
        if(!cnst[i])
        {
            for(int j=2; i*j<100005; ++j)
            {
                cnst[i*j]=1;
            }
        }
    }
}
int main ()
{
    int i,k(1),n;
    sieve();
    scanf("%d",&n);
    int m[n+1];
    for(i=2; i<=n+1; ++i)
    {
        if(cnst[i])
        {
            m[i] = 2;
            k=2;
        }else
        m[i]=1;
    }
    printf("%d\n",k);
    for(i=2; i<=n+1; ++i)
    {
        cout<<m[i]<<' ';
    }
    cout<<endl;
}
