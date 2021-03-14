#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main ()
{
    int n,i,x,y;
    string s;
    scanf("%d",&n);
    x=y=0;
    cin>>s;
    for(i=0; i<n; ++i)
    {
        if(s[i]=='A')
        {
            ++x;
        }
        else
        {
            ++y;
        }
    }
    if(x>y)
    {
        printf("Anton\n");
    }
    else if(y>x)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
}
