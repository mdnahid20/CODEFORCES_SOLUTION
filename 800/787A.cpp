#include<iostream>
#include<cstdio>
#include<map>
#define ll long long
//#define k 250000000
using namespace std;
int k=1000;
int main ()
{
    int a,b,c,d;
    map<int,bool>m;
    int i;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for(i=0; i<=k; i++)
    {
        m[b+(a*i)]=1;
    }
    for(i=0; i<=k; i++)
    {
        if(m[d+(c*i)])
        {
            printf("%d\n",d+(c*i));
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
