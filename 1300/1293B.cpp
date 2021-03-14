#include<iostream>
#include<cstdio>

using namespace std;

int main ()
{
    double n;
    cin>>n;
    double sum=0;
    while(n!=0)
    {
        sum+=(1/n);
        --n;
    }
    printf("%.12lf\n",sum);
}
