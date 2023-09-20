
#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<ll>consec;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        while(s[i] == '0' && i < n)
        {
            counter++;
            i++;
        }

        if(counter)
            consec.push_back(counter);

        counter = 0;
    }

    if(consec.empty())
    {
        cout << 0;
        return 0;
    }
    ll gcdval = consec[0];
    for(auto &x : consec)
    {
        gcdval = __gcd(x, gcdval);
    }

    ll ans = 0;
    for(auto &x : consec)
    {
        ans += x/gcdval;
    }
    cout << ans;


}

