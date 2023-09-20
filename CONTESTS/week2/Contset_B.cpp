#include <bits/stdc++.h>

using namespace std;
#define ll unsigned long long
int arr[100003];

bool check(int a)
{
    string s = to_string(a);
    int zero = 0;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == '0')
            zero = 1;
        if(i+1 < s.size() && s[i+1] != '0' && zero)
            return true;
    }
    return false;
}

int main()
{

   for(ll i = 1; i <= 100000; i++)
   {
       arr[i] = arr[i-1] + check(i);
   }

   int t; cin >> t;

   while(t--)
   {
       ll q; cin >> q;
       while(q--)
       {
           ll l, r;
           cin >> l >> r;
           cout << arr[r] - arr[l-1] << '\n';
       }
   }
}



