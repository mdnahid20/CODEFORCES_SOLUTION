#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    int n,i;
    int s(0),mo(0);
    int k(0),j(0);
    char c;
    string sh,mor,a,b;
    scanf("%d",&n);
    cin>>sh>>mor;
    a=sh;
    b=mor;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i=0; i<n,j<n;)
    {
        if(a[i]<b[j])
        {
            s++;
            i++;
        }
        j++;
    }
    for(i=0; i<n; i++)
    {
        c=sh[i];
        for(j=0; j<n; j++)
        {
            if(b[j]!='$' && b[j]>=c)
            {
                b[j]='$';
                k++;
                break;
            }
        }
    }
    mo=n-k;
    cout<<mo<<endl<<s;
}
