#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        for(int i2=0; i2<n; ++i2)
        {
              cout<<char('a'+i2%b);
        }
        cout<<endl;
    }
}
