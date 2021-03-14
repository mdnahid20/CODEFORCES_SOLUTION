#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main ()
{
    int t,i,j;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int m=2*n;
        int ar[m];
        for(j=0; j<m; j++)
        {
            cin>>ar[j];
        }
        sort(ar,ar+m);
      cout<<abs(ar[n-1]-ar[n])<<endl;
    }
}

