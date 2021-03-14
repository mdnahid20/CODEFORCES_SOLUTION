#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
int main( )
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        if(n<=3 || n==5 || n==7 || n==11)
            printf("-1\n");
        else
        {
            if(n%2==1)
                printf("%d\n",(n-4)/4);
            else
                printf("%d\n",n/4);
        }
    }
}


