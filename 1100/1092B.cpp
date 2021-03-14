#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    int n,i;
    scanf("%d", &n);
    int v[n];
     for(i=0; i<n; ++i)
    { scanf("%d",&v[i]);
    }
    sort(v,v+n);
    int c=0;
    for(i=0; i<n; i+=2)
    {
        c += v[i+1]-v[i];
    }
    printf("%d\n",c);

}
