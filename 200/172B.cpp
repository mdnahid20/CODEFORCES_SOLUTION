#include<iostream>
#include<cstdio>
using namespace std;

int a1[100005],c(0);
int main()
{
    int a,b,m,r;

    scanf("%d %d %d %d",&a,&b,&m,&r);
    for(;!a1[r];r=(r*a+b)%m) a1[r] = ++c;

    printf("%d\n",(c-a1[r]+1));
    return 0;
}
