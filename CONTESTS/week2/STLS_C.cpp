#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s;
    set<string>st;
    queue<string>q;
    for(int i = 0; i < n ;i++)
    {
        map<int, int>mp;
        cin >> s;
        for(auto& c: s) mp[c]++;

        if(mp['w']&&mp['a'] >= 2&&mp['s']&&mp['t'])
            st.insert(s);
        else
            q.push(s);
        mp.clear();
    }

    for(auto&i : st) cout << i << '\n';
    while(!q.empty())
    {
        cout << q.front() << '\n';
        q.pop();
    }
    st.clear();
    q.clear();

}
