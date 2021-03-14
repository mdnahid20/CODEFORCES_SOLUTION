#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,n,c,num=0;
        scanf("%d %d %d",&a,&b,&n);
        if(a<b)
            c=a,a=b,b=c;
        while(1)
        {
            if(num%2==0)
                b+=a,c=b;
            else
                a+=b,c=a;
            num++;
            if(c>n)
                break;
        }
        printf("%d\n",num);
    }
    return 0;
}
