#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int i,n,k,x;
    scanf("%d %d\n",&n,&k);
    int arr[n]={0};
    for(i=1; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }x=1;
    while(x<=n)
    {if(x==k)
       {printf("YES\n");return 0;}

         x+=arr[x];
       } printf("NO\n");
       return 0;
}
