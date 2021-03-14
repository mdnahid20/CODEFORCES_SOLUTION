#include<iostream>
#include<cstdio>
using namespace std;

string s[5][5] = {{"a","e","i","o","u"},{"e","i","o","u","a"},{"i","o","u","a","e"},{"o","u","a","e","i"},{"u","a","e","i","o"}};
int main ()
{
    int n(0),m(0),k,i;
    scanf("%d",&k);
    for(i=5; i<=k; ++i)
    {

        if(i*(k/i)==k)
        {
            if(i>4 && k/i>4)
            {
                n=i;
                m=k/i;
                break;
            }
        }
    }
    if(!n || !m)
    {
        printf("-1\n");
        return 0;
    }
    int x,l,p(0);
    for(i=0; i<m; ++i)
    {
        x=0;
        for(l=0; l<n; ++l)
        {
            cout<<s[p][x];
            ++x;
            if(x==5)
                x=0;
        }
        ++p;
        if(p==5)
            p=0;
    }
}
