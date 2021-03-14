#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    float n;
    scanf("%f",&n);
    float num,sum=0;
    float d=100/n;
    while(n--)
    {
        cin>>num;
        sum += num*d/100;
    }
    printf("%.12f\n",sum);
    return 0;
}
