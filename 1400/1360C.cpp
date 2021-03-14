#include<iostream>
#include<cstdio>
#include<algorithm>
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define pr(n) printf("%d\n",n);
#define fornt(i,n) for(i=0; i<n; ++i)
#define Max 10000000;
using namespace std;
void cal()
{
    int n,i,j;
        int a(0),b(0);
        cin>>n;
        int arr[n];
        fornt(i,n)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                ++a;
            }
            else
            {
                ++b;
            }
        }
        if(a%2!=b%2)
        {
            printf("NO\n");
        }
        else
        {
            if(a%2==0)
            {
                printf("YES\n");
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    for (j = i + 1; j < n; j++)
                    {
                        if (arr[i]%2!= arr[j]%2 && abs(arr[i]-arr[j])==1)
                        {
                            printf("YES\n");
                            return;
                        }
                    }
                }
                printf("NO\n");
            }
        }
    }

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
     cal();
    }
}
