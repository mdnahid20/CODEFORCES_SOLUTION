#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main ()
{
   ll m,n,p;
   scanf("%lld %lld",&m,&n);
   ll mini,maxi;
   if(!(m%n)){
        p=(m/n);
         mini = ((p*(p-1))/2)*n;
   }else {
       p=(m/n);
      mini = ((p*(p-1))/2)*(n-(m%n));
      ++p;
      mini += ((p*(p-1))/2)*(m%n);
   }
   p = m-n+1;
   maxi = ((p*(p-1))/2);
   printf("%lld %lld\n",mini,maxi);
}
