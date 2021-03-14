#include<iostream>
#include<cstdio>
#include<string>
using namespace std;


int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,p;
        string num;
        cin>>n>>num;
        string a(n,'0'),b(n,'0');
        for(i=0; i<n; ++i)
        {
            if(num[i]=='1')
            {
                a[i]='1';
                b[i]='0';
                for(int j=i+1; j<n; ++j)
                {
                    b[j]=num[j];
                }
                break;
            }
             p = num[i]-'0';
            a[i] = b[i] = '0'+ (p/2);
        }cout<<a<<endl<<b<<endl;
    }
}
