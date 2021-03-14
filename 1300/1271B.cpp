/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/


#include <stdio.h>
char S[210];
int b=0,w=0,pos[210],tot=0;
int main()
{
    int n,i,k;
    scanf("%d%s",&n,S+1);
    for(i=1; i<=n; i++)
        if(S[i]=='B')b++;
        else if(S[i]=='W')w++;
    if(b==0||w==0)
    {
        printf("0\n");
        return 0;
    }
    else if((b%2)&&(w%2))
    {
        printf("-1\n");
        return 0;
    }
    else if(b%2==0)
    {
        i=1;
        while(i<=n)
        {
            if(S[i]=='B')
            {
                pos[++tot]=i;
                if(i+1<=n&&S[i+1]=='B')i+=2;
                else if(i+1<=n&&S[i+1]=='W')S[i+1]='B',i+=1;
            }
            else i++;
        }
    }
    else if(w%2==0)
    {
        i=1;
        while(i<=n)
        {
            if(S[i]=='W')
            {
                pos[++tot]=i;
                if(i+1<=n&&S[i+1]=='W')i+=2;
                else if(i+1<=n&&S[i+1]=='B')S[i+1]='W',i+=1;
            }
            else i++;
        }
    }
    printf("%d\n",tot);
    for(i=1; i<=tot; i++)
        if(i==1)printf("%d",pos[i]);
        else printf(" %d",pos[i]);
    printf("\n");
    return 0;
}

