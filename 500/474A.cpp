#include<stdio.h>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    char a[105];
    char b[35]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char s;
    scanf(" %c",&s);
    scanf("%s",a);
    int len=strlen(a);
    if(s=='R')
    {
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<30; j++)
                if(a[i]==b[j])
                {
                    printf("%c",b[j-1]);
                    break;
                }
        }
    }
    else
    {
        for(int i=0; i<len; i++)
            for(int j=0; j<30; j++)
                if(a[i]==b[j])
                {
                    printf("%c",b[j+1]);
                    break;
                }
    }
    printf("\n");
    return 0;
}
