#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main ()
{
    int r,x,y,x1,y1;
    scanf("%d %d %d %d %d",&r,&x,&y,&x1,&y1);
    double d=sqrt(pow((x-x1),2.0)+pow((y-y1),2.0));
    cout << (int)(ceil)(d / r / 2) << endl;
}
