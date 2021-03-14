#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,sum,maximum;
    while(cin>>a>>b>>c)
    {
        sum=maximum=0;
        sum=(a+b)*c;
        if(sum>maximum){maximum=sum;}
        sum=a*(b+c);
        if(sum>maximum){maximum=sum;}
        sum=a*b*c;
        if(sum>maximum){maximum=sum;}
        sum=a*b+c;
        if(sum>maximum){maximum=sum;}
        sum=a+b*c;
        if(sum>maximum){maximum=sum;}
        sum=a+b+c;
        if(sum>maximum){maximum=sum;}
        cout<<maximum<<endl;
    }
}
