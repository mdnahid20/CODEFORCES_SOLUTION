#include<iostream>
#include<cstdio>
using namespace std;
int mark[10000]={0};
int main ()
{
    int n;
    scanf("%d",&n);
    int c=0;
    if(n==1){cout<<n<<endl;return 0;}
    if(n<=3){cout<<n-1<<endl;return 0;}
    if(n%2!=0)
    {int i=1;
        while(i*i<=n){i+=2;
            if(n%i==0)
            {
                for(int i2=1; i2*i<n; i2++)
                {
                    mark[i2*i]=1;
                }
            }
        }
        for(int i=1; i<n; i++)
        {
            if(!mark[i])
            {
                ++c;
            }
        }
        cout<<c<<endl;
    return 0;}
    if(n%2==0)
    {int i=1;
        while(i*i<=n){++i;
            if(n%i==0)
            {
                for(int i2=1; i2*i<n; i2++)
                {
                    mark[i2*i]=1;
                }
            }
        }
        for(int i=1; i<n; i++)
        {
            if(!mark[i])
            {
                ++c;
            }
        }
        cout<<c<<endl;
    return 0;}
}
