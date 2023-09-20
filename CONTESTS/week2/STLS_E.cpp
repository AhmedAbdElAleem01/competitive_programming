#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    map<int, queue<int>>m;

    while(n--)
    {
        int q; cin >> q;
        int s, c;
        if(q == 1)
            cin >> s >> c;
        else
            cin >> s;

        int now;
        switch(q)
        {
            case 1:
                m[s].push(c);
                break;
            case 2:
                if(!m[s].empty())
                    m[s].pop();
                else
                    cout << -1 << '\n';
                break;
            case 3:
                if(!m[s].empty())
                {
                    cout << m[s].front() << '\n';
                }
                else
                    cout << -1 << '\n';
                break;
        }
    }
}
