#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

int main ()
{
    long long int x,y,t;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&x,&y);
        if(abs(x-y)==1)
        {
            printf("NO\n");
        }else{
        printf("YES\n");
        }
    }
}
