#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    int i,n;
    scanf("%d", &n);
    int v[n];
    for(i=0; i<n; ++i){
        scanf("%d", &v[i]);
    }sort(v,v+n);
    if(n%2!=0)
    {
        printf("%d\n",v[n/2]);
    }
    else{
       printf("%d\n",v[(n-1)/2]);
    }
}

