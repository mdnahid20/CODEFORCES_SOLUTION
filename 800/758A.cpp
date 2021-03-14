#include<iostream>
using namespace std;

int main ()
{
    int n;
    while(cin>>n)
    {int need=0,maximum=0,i;
        int arr[n];
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]>maximum){maximum=arr[i];}
        }
        for(i=1; i<=n; i++)
        {
           need+=maximum-arr[i];
        }
        cout<<need<<endl;
    }
}
