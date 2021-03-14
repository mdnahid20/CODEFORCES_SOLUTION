#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main ()
{
    int i,n,x;
    map<int,int>num;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%d",&x);
        ++num[x];
    }
    if(num[2])
    {
        cout<<2<<' ';
        --num[2];
        if(num[1])
        {
            cout<<1<<' ';
            --num[1];
            while(num[2]--)
                cout<<2<<' ';
            while(num[1]--)
                cout<<1<<' ';
        }
        else
        {
            while(num[2]--)
                cout<<2<<' ';

        }
    }
    else
    {
        while(num[1]--)
            cout<<1<<' ';
    }
    cout<<endl;
}
