#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve()
{
   int n; cin >> n;
   long arr[n];    long preHealth[n];   long now = 0;

   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
       now += arr[i];
       preHealth[i] = now;
   }

   map<long, int> can_remove;
   int ans = n;
   long increased_health = 0;

   for(int i = 0; i < n; i++)
   {
       if(arr[i] < 0)
       {
          can_remove[arr[i]]++;
       }


       while(preHealth[i] + increased_health < 0) /// keep dropping poisons
       {
           ans--;
           long max_poison = can_remove.begin()->first;
           increased_health  -= max_poison; /// gaining health again

           can_remove[max_poison]--; /// drop poison
           if(can_remove[max_poison] == 0) can_remove.erase(max_poison);
           if(ans == 0) break;

       }
   }
   cout << ans;


}

int main()
{
    int t = 1;
    while(t--)
    {
        solve();
    }
}
