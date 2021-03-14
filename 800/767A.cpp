#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

bool a[100001];
int high(0);
void print(int x,int y)
{
    if(x==y);
    {
        for(int i=y; i>0; i--)
        {
            if(a[i])
            {
                cout<<i<<" ";
                a[i]=0;
                high=i-1;
            }
            else
            {
                break;
            }
        }
    }
}
int main()
{
    int n,x;
    cin>>n;
    high=n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[x]=1;
        print(x,high);
        cout<<endl;
    }
    return 0;
}
