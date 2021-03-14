#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    int arr1[t],arr2[t],arr3[t],sum1,sum2,sum3;
    sum1=sum2=sum3=0;
        for(int i=1; i<=t; i++)
        {
            cin>>arr1[i]>>arr2[i]>>arr3[i];
            sum1+=arr1[i];sum2+=arr2[i];sum3+=arr3[i];
        }
        if(sum1==0 && sum2==0 && sum3==0)
            {cout<<"YES\n";}
        else
            {cout<<"NO\n";}
            }
