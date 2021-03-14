#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;

long gcd(int64_t a, int64_t b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main ()
{
    int64_t n,i,p(1),k;
    cin>>n>>k;
    if(k==0)
    {
        cout<<n<<endl;
    }
    else
    {
        for(i=1; i<=k; ++i)
        {
            p *= 10;
        }
        int64_t g = gcd(p,n);
        int64_t l = ( n / g ) * p;
        cout<<l<<endl;
    }
}
