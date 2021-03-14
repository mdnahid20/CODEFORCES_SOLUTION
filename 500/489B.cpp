#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    int m,n;
    scanf("%d",&n);
    int i,i2;
    int arr[n];
    for(i=0; i<n; ++i)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    int arr2[m];
    for(i=0; i<m; ++i)
    {
        scanf("%d",&arr2[i]);
    }
    int pairs=0;
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    for(i=0; i<n; ++i)
    {
        for(i2=0; i2<m; ++i2)
        {
            if(abs(arr[i]-arr2[i2])<2)
            {
                pairs++;
                arr2[i2]=1000;
                break;
            }
        }
    }
    printf("%d\n",pairs);
    return 0;
}
