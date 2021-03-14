#include<iostream>
using namespace std;
int main ()
{
   long long int a,c;
    while(cin>>a)
    {c=0;if(a>=100){c=a/100;a=a-100*c;}
        if(a>=20){c+=(a/20); a=a-(20*(a/20));}
       if(a>=10){c+=a/10;a=a-(10*(a/10));}
      if(a>=5){c+=a/5;a=a-(5*(a/5));}
      if(a>=1){c+=a/1;}cout<<c<<endl;}return 0;
}
