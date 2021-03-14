#include<iostream>
using namespace std;

int main ()
{
    int t,x,y,a,b,d;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        d=y-x;
        if(d%(a+b)==0)
        {
            cout<<d/(a+b)<<endl;
        }
        else
        {
            cout<<"-1\n"<<endl;
        }
    }
}
