#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int m,s;
    scanf("%d %d",&m,&s);
    if (s==0)
    {
        cout <<(m == 1 ? "0 0" : "-1 -1")<<endl;
        return 0;
    }
    string s1,s2;
    int i,i2,sum=0;
    for(i=0; i<m; ++i)
    {
        sum=min(s,9);
        s2+=sum+'0';
        s-=sum;
    }
    if (s > 0)
    {
        printf("-1 -1\n");
        return 0;
    }
    for(i=m-1; i>=0; --i)
    {
        s1 += s2[i];
    }
    for (i = 0; s1[i] == '0'; i++);
    {
        s1[i]--, s1[0]++;
    }
    cout<<s1<<" "<<s2<<endl;
    return 0;
}
