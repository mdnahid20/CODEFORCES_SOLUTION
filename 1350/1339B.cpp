
#include<bits/stdc++.h>
#define fornt(i,n) for(int i=0;i<n;i++)
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        for (int i = n/2; i < n; i++) {
            cout << nums[i] << " ";

            if (i == n/2 && n % 2 == 1) {
                continue;
            } else {
                cout << nums[n-1-i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

