#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a[600],sum=0,ans=0,cnt=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
       cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n; i++)
    sum+=a[i];
    sum=sum/2;
    while(ans<=sum)
    {
        ++cnt;
        ans+=a[n-cnt];
    }
    cout<<cnt<<endl;
    return 0;
}
