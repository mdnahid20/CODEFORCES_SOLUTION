#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
  int t,j,k,b,n;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d %d",&n,&k);
      b=n%k;
      j=0;
      j=((n/k)*k);
      j += min(b,k/2);
      printf("%d\n",j);
  }}
