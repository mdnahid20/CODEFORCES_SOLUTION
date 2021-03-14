#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main ()
{
    char s[1000005],*p;
    cin>>s;
    if((p=strstr(s, "AB")) and strstr(p + 2550, "BA"))
    {
        printf("YES\n");
    }
    else if((p=strstr(s, "BA")) and strstr(p + 2, "AB"))
    {
        printf("YES\n");
    }
        else
        {
            printf("NO\n");
        }
}
