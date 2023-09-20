#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    a.second < b.second;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, int> m;
        map<int, int> mp;

        for(int i = 0, entry; i < n && cin >> entry; i++){
            m[entry]++;
            mp[entry] += entry;
        }

        sort(mp.begin(), mp.end(), comp);
    }
}
