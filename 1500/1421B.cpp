#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n+1];
        fornt(0,n)
        cin>>s[i];
        int a = (s[0][1] - '0');
        int b = (s[1][0] - '0');
        int c = (s[n - 2][n - 1] - '0');
        int d = (s[n - 1][n - 2] - '0');
         if(a == 0 && b == 0 && c == 0 && d == 0){printf("2\n1 2\n2 1\n");}
        if(a == 0 && b == 0 && c == 0 && d == 1){printf("1\n%ld %ld\n", n - 1, n);}
        if(a == 0 && b == 0 && c == 1 && d == 0){printf("1\n%ld %ld\n", n, n - 1);}
        if(a == 0 && b == 0 && c == 1 && d == 1){puts("0");}

        if(a == 0 && b == 1 && c == 0 && d == 0){printf("1\n1 2\n");}
        if(a == 0 && b == 1 && c == 0 && d == 1){printf("2\n1 2\n%ld %ld\n", n, n - 1);}
        if(a == 0 && b == 1 && c == 1 && d == 0){printf("2\n2 1\n%ld %ld\n", n, n - 1);}
        if(a == 0 && b == 1 && c == 1 && d == 1){printf("1\n2 1\n");}

        if(a == 1 && b == 0 && c == 0 && d == 0){printf("1\n2 1\n");}
        if(a == 1 && b == 0 && c == 0 && d == 1){printf("2\n2 1\n%ld %ld\n", n, n - 1);}
        if(a == 1 && b == 0 && c == 1 && d == 0){printf("2\n1 2\n%ld %ld\n", n, n - 1);}
        if(a == 1 && b == 0 && c == 1 && d == 1){printf("1\n1 2\n");}

        if(a == 1 && b == 1 && c == 0 && d == 0){puts("0");}
        if(a == 1 && b == 1 && c == 0 && d == 1){printf("1\n%ld %ld\n", n, n - 1);}
        if(a == 1 && b == 1 && c == 1 && d == 0){printf("1\n%ld %ld\n", n - 1, n);}
        if(a == 1 && b == 1 && c == 1 && d == 1){printf("2\n1 2\n2 1\n");}
    }
}

