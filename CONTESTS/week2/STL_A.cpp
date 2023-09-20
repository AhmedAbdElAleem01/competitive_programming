#include<bits/stdc++.h>

using namespace std;
#define ll unsigned long long

int main()
{
    string s; cin >> s;
    string v = "";
    int flag = 0;

    map<char, int>m;
    for(auto& c: s)
    {
        if(m.count(c) == 0)
        {
            m[c]++;
            v.push_back(c);
            flag = 0;
        }
        else if(c == 'o')
        {
            m[c]++;
            if(flag && m[c] < 2)
            {
                v.push_back('o');
                flag = 0;
            }
            flag = 1;
        }
    }
    for(auto&c:v) cout << c << " ";

    cout << (v == "booty")?"YES":"NO";
}
