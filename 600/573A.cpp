#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main ()
{
    int x,c=1,n;
    int a[100007],i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        while(a[i]%2==0)
            a[i]/=2;
        while(a[i]%3==0)
            a[i]/=3;
        if(i==0)
            x=a[i];
        if(c && a[i]!=x)
            c=0;
    }
    if(!c)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
