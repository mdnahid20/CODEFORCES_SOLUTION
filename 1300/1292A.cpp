#include<iostream>
#include<cstdio>
#include<map>
#include<utility>
#define mp(a,b) make_pair(a,b)
using namespace std;

map< pair<int,int>,int > m;
int main ()
{
   int n,q,i;
   int x,y,p=0;
   scanf("%d %d",&n,&q);
   for(i=0; i<q; ++i)
   {
       scanf("%d %d",&x,&y);
     if(!m[mp(x,y)])
     {
         ++m[mp(x,y)];
         if(x==1)
         {
             if(m[mp(x+1,y)])++p;
             if(m[mp(x+1,y+1)])++p;
             if(m[mp(x+1,y-1)])++p;
         }
         else
          {
             if(m[mp(x-1,y)])++p;
             if(m[mp(x-1,y-1)])++p;
             if(m[mp(x-1,y+1)])++p;
         }
     }
     else
     {
         m[mp(x,y)]--;
          if(x==1)
         {
             if(m[mp(x+1,y)])--p;
             if(m[mp(x+1,y+1)])--p;
             if(m[mp(x+1,y-1)])--p;
         }
         else
          {
             if(m[mp(x-1,y)])--p;
             if(m[mp(x-1,y-1)])--p;
             if(m[mp(x-1,y+1)])--p;
         }
     }
    if(p)
        printf("No\n");
    else
        printf("Yes\n");

   }

}
