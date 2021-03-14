#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main ()
{
    ll i,n,k;
    double sum(0);
    int a[200001]={0};
    scanf("%lld %lld",&n,&k);
    for(i=0; i<n; ++i)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<k; ++i)
    {
       sum+=a[i];
    }
    double p=sum;
    ll j=k;
    for(i=1; i<n-k+1; ++i)
    {
        sum -= a[i-1];
        sum += a[j];
        ++j; p+=sum;
    }
    printf("%.10lf\n",p/(n-k+1));
}
