#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main ()
{
    int arr[4],i;
    for(i=0; i<4; ++i)
      {   scanf("%d", &arr[i]);
    }sort(arr,arr+4);
printf("%d %d %d\n",arr[3]-arr[1],arr[3]-arr[2],arr[3]-arr[0]);
    return 0;
}
