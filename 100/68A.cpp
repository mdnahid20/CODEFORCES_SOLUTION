#import<iostream>
#import<cstdio>
using namespace std;

int main()
{
    int a,b;
    int t=4,k,p=9999;
    while(t--)
        {cin>>k;p=min(p,k);}
    cin>>a>>b;
    if(p>b)
        p=b-a+1;
    else
    {
        if(p>a)
            p=p-a;
        else
            p=0;
    }
    printf("%d\n",p);

}
