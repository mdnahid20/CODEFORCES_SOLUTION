#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(i=0; i<n; ++i)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int x,y;
    int c=0,mp[100000]={0};
    x=arr[n-1];
    for(i=0; i<n; ++i)
    {
        if(x%arr[i]==0)
        {
            ++mp[arr[i]];
        }
        if(mp[arr[i]]!=1)
    {
        arr2[c]=arr[i];
            ++c;
        }
    }
    sort(arr2,arr2+c);
    y=arr2[c-1];
    printf("%d %d\n",x,y);
    return 0;
}
