#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;

    while(t--)
    {

        int n; cin >> n;
        map<int, int> m;

        for(int i = 0, entry; i < n && cin >> entry; i++)
            m[entry]++;

        unsigned long long ans = 0;
        for(auto& [f, s]: m)
        {
            if(s >= 3)
                ans = max(f*s, ans);
        }
        cout << ans << '\n';
    }
}
