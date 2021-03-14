#include<iostream>
#include<cstdio>
#include<algorithm>
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define fornt(i,n) for(i=0; i<n; ++i)
using namespace std;


int main ()
{
  int t;
  sc(t);
  while(t--)
  {
      int n,i;
      sc(n);
      int arr[n],c=1001;
     fornt(i,n)
     {
         sc(arr[i]);
     }sort(arr,arr+n);
     fornt(i,n-1)
     {
         c = min( (arr[i+1]-arr[i]) , c);
     }
     printf("%d\n",c);
  }
}
