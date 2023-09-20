#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 8000, flag = 0, counter = 0;
    for(char &c : s)
    {
        if(c == '0')
        {
            counter++;
        }
        else if(c == '1' && counter)
        {
            ans = min(ans, counter);
            counter = 0;
        }
    }
    if(s[s.size()-1] == '0')
        ans = min(ans, counter);
    int zeros = count(s.begin(), s.end(), '0');

    int rip = ceil((double)zeros/ans);
    cout << rip;

}

