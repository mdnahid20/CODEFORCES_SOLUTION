#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int n,t;
    scanf("%d %d",&n,&t);
    char s[52];
    scanf("%s",s);
    int i,i2;
    for(i=0; i<t; ++i)
    {
        for(i2=0; i2<n-1; ++i2)
        {
            if(s[i2]=='B' && s[i2+1]=='G')
            {
                s[i2]='G';
                s[i2+1]='B';
                i2++;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}
