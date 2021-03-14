/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main()
{
    fastread();
    int n,m;
    cin>>n>>m;
    int ans=0;
    string str[1505];
    set<string> st;
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
        st.insert(str[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            string s="";
            for(int k=0; k<m; k++)
            {

                if(str[i][k]!=str[j][k])
                {
                    int t[3]= {0};
                    if(str[i][k]=='S'||str[j][k]=='S') t[0]=1;
                    if(str[i][k]=='E'||str[j][k]=='E') t[1]=1;
                    if(str[i][k]=='T'||str[j][k]=='T') t[2]=1;
                    for(int p=0; p<3; p++)
                    {
                        if(!t[p])
                        {
                            if(p==0) s+='S';
                            else if(p==1) s+='E';
                            else s+='T';
                        }
                    }
                }
                else
                    s+=str[i][k];
            }
            if(st.count(s)) ans++;
        }
    }
    cout<<ans/3<<endl;



    return 0;
}
