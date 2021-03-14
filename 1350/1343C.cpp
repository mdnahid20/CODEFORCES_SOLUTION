#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int sign(int x)
{
    if(x>0)
        return 1;
    else
        return 0;
}
int main ()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(i=0; i<n; ++i)
        {
            scanf("%d",&arr[i]);
        }
        long long sum=0;
        int x,j;
        for(i=0; i<n; ++i)
        {
            x = arr[i];
            j = i;
            while(j<n && (sign(arr[i])==sign(arr[j])))
            {
                x = max(x,arr[j]);
                ++j;
            }
            sum += x;
            i = j -1;
        }
        printf("%lld\n",sum);
    }
}
