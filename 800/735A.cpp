#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main ()
{
    string s;
    int i,j;
    int k,n;
    int g,t,c=0;
    scanf("%d %d",&n,&k);
    cin>>s;
    for(i=0; i<s.length(); ++i)
    {
        if(s[i]=='G')
            g=i;
        else if(s[i]=='T')
            t=i;
    }
    if(t>g)
    {
        for(i=g; i<s.length(); i+=k)
        {
            if(s[i]=='#')
                break;
            else if(s[i]=='T')
                c=1;
        }
    }
    else
    {
        for(i=g; i>=0; i-=k)
        {
            if(s[i]=='#')
                break;
            else if(s[i]=='T')
                c=1;
        }
    }
    if(c==1)
        printf("YES\n");
        else
            printf("NO\n");

}
