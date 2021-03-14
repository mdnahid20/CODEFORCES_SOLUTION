#include<iostream>
using namespace std;
int main ()
{
    int a,i,c;
    while(cin>>a){c=0;for(i=1; i<=a/2; i++)
        {if(a%i==0){c++;}}cout<<c;}return 0;
}
