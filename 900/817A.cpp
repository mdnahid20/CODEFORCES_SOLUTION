#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main ()
{
    int x,y,t1,t2;
    int a,b;
    scanf("%d %d %d %d",&x,&y,&t1,&t2);
    scanf("%d %d",&a,&b);
    x=abs(x-t1);
    y=abs(y-t2);
    if(x%a==0 && y%b==0)
    {
        a=x/a;b=y/b;
        if(a%2==b%2)
        printf("YES\n");
        else
          printf("NO\n");
    }
    else
        printf("NO\n");
    return 0;
}
