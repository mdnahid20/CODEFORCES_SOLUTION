#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main ()
{
    int i,t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int p,d(-1),c(0);
        p=s.size();
        s[p]='R';
        for(i=0; i<=p; ++i)
        {
            if(s[i]=='R')
            {
                d = i-d;
                c = max(c,d);
                d=i;
            }
        }
        printf("%d\n",c);
    }
}
