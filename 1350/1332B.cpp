#include <iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cstring>
using namespace std;
const int N=1010;
int n,t;
int prime[11]={2,3,5,7,11,13,17,19,23,29,31};
int a;
int cnt;
int num[12];
int ans[N];
int main()
{
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        memset(ans,0,sizeof ans);
        memset(num,0,sizeof num);
        cnt=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            for(int j=0;j<11;j++)
            {
                if(a%prime[j]==0)
                {
                    if(num[j]==0)num[j]=++cnt;
                    ans[i]=num[j];break;
                }
            }
        }
        printf("%d\n",cnt);
        for(int i=0;i<n-1;i++)printf("%d ",ans[i]);
        printf("%d\n",ans[n-1]);
    }
    return 0;
}

