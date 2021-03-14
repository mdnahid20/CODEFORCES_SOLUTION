#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int a[100005]= {0};
    a[0]=a[1]=1;
    for(int i=2; i<=317; i++)
    {
        if(a[i]==1)
            continue;
        for(int j=i*i; j<=100005; j+=i)
            if(a[j]==0)
                a[j]=1;
    }
    int n, m, arr[505][505], tmp, cnt=0, miR=INT_MAX, miC=INT_MAX, mi=INT_MAX;
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            scanf("%d", &tmp);
            while(a[tmp]==1)
                cnt++, tmp++;
            arr[i][j]=cnt, cnt=0;
        }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cnt+=arr[i][j];
        }
        miR=min(miR, cnt);
        cnt=0;
    }
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            cnt+=arr[i][j];
        }
        miC=min(miC, cnt);
        cnt=0;
    }
    mi=min(miR, miC);
    printf("%d", mi);
    return 0;
}

