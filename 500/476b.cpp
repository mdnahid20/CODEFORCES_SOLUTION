#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;

int main ()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,j,c(0),sum(0);
    int k(0),sum2(0);
    for(i=0; i<s1.size(); i++)
    {
        if(s1[i]=='+')
            ++sum;
        else
            --sum;
    }
    for(i=0; i<s2.size(); i++)
    {
        if(s2[i]=='+')
            ++sum2;
        else if(s2[i]=='-')
            --sum2;
        else
        {
            ++c;
        }
    }
    if(sum==sum2 && !c)
    {
        printf("1.000000000000\n");
        return 0;
    }
    for(i=0; i<pow(2,c); ++i)
    {
        int a=i;
        int p=sum2;
        for(j=0; j<c; ++j)
        {
            if(a & 1)
                --p;
            else
                ++p;
            a /= 2;
        }
        if(p==sum)
        {
            ++k;
        }
    }
    c = pow(2,c);
    cout.precision(20);
    cout << fixed << k / double(c) << endl;
}
