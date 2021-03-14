#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
#define sc(x) scanf("%d",&x);
#define sc2(x,y) sccanf("%d %d",&x,&y)
#define fornt(i,n) for(i=0; i<n; i++)

int main ()
{
    int t;
    sc(t);
    while(t--)
    {
        double p,tita;
        scanf("%lf",&tita);
        p = (180*2)/(180-tita);
        if(p==(ceil(p)))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}

