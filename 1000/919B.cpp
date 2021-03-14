#include<iostream>
#include<cstdio>
using namespace std;
int sumofdigit(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int main ()
{
   int k,i;
   int c(0),sum(0);
   scanf("%d",&k);
   for(i=19; i<11000000; i+=9)
   {
       if(sumofdigit(i)==10)
       {++c;
       if(c==k){
           printf("%d\n",i);
       return 0;
       }}
   }
}
