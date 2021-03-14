#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
using namespace std;


int main ()
{
    string s;
    int t,i;
    scanf("%d",&t);
    map<string,int> m;
    for(i=0; i<t; ++i)
    {
        cin>>s;
        ++m[s];
        if(m[s]>1)
        {
            int p;
            p =  m[s] -1;
             cout<<s<<p<<endl;
        }
        else
        printf("OK\n");
    }
}
