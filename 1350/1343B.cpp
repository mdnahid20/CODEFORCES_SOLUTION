#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum,m;
        scanf("%d",&n);
        int sum2,c,i;
        sum=sum2=c=m=0;
        int arr[n/2],arr2[n/2];
        for(i=2; i<=n; i+=2)
        {
            sum2 += i;
            arr[c]=i;
            ++c;
        }
        for(i=1; i<=n; i+=2)
        {
            sum += i;
            arr2[m]=i;
            ++m;
            cout<<sum<<endl;
        }
        sort(arr,arr+c);
        sort(arr2,arr2+m);
    cout<<sum<<" "<<sum2<<endl;
        if(sum==sum2)
        {
            printf("YES\n");
            for(i=0; i<c; ++i)
            {
                printf("%d ",arr[i]);
            }
            for(i=0; i<m-1; ++i)
            {
                printf("%d ",arr2[i]);
            }
            printf("%d\n",arr2[m-1]);
        }
        else
        {
            printf("NO\n");
        }
    }
}
