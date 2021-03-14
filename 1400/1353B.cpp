#include<iostream>
#include<cstdio>
#include<algorithm>
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define fornt(i,n) for(i=0; i<n; ++i)
using namespace std;


int main ()
{
    int t;
    sc(t);
    while(t--)
    {
        int i,n,k;
        sc2(n,k);
        int arr[n],arr2[n];
        fornt(i,n)
        {
            sc(arr[i]);
        }
        fornt(i,n)
        {
            sc(arr2[i]);
        }
        sort(arr,arr+n);
        sort(arr2,arr2+n);
        int sum=0,c=n;
        fornt(i,k)
        {
            sum += max(arr[i],arr2[--c]);
        }for(i=k; i<n; ++i)
        {
            sum += arr[i];
        }
        printf("%d\n",sum);
    }
}
