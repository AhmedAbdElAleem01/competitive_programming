#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n; cin >> k;
        unsigned long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        int sz = 2*n;

        unsigned long long pre[sz];
        pre[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            pre[i] = a[i] + pre[i-1];
        }

        for(int i = n; i < sz; i++)
        {
            pre[i] = pre[i-1] + a[i-n];
        }

        /*for(int i = 0; i < sz; i++)
            cout << pre[i] << " ";*/

        int ans = 0;

        for(int i = 0; i < sz && pre[i] <= k; i++)
        {
            if(pre[i] == k)
            {
                ans = 1;
                break;
            }
        }
        if(ans == 1) cout << "YES\n";else cout << "NO\n";

    }
}
