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

const int N = 2e5 + 5;

int n, x;
int deg[N];
vector<int> g[N];

int main()
{
    fastread();
    int t;
    cin>>t;
       while(t--)
    {
        memset(deg, 0, sizeof(deg));
        cin >> n >> x;
        for(int i = 1; i <= n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            deg[u]++, deg[v]++;
        }
        if(deg[x] <= 1)
            cout << "Ayush" << endl;
        else
        {
            if(n % 2)
                cout << "Ashish" << endl;
            else
                cout << "Ayush" << endl;
        }

    }
}
