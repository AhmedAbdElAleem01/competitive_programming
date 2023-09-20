#include<iostream>
#include <cmath>
#include <algorithm>
#include "vector"
using namespace std;
#define ll unsigned long long 
#define MOD 100

void ahmed()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll gcd(ll a, ll b)
{
    if(a%b == 0)
        return b;
    else
        return gcd(b, a%b);
}

vector<ll> divisors(ll x)
{
    vector<ll>v;
    for(ll i = 1; i <= sqrt(x); i++)
    {
        if(x%i == 0)
        {
            v.push_back(i);
            v.push_back(x/i);
        }
    }
    if(v.back() == sqrt(x)) v.pop_back(); 
    sort(v.begin(), v.end());
    return v;
}
void solve()
{
   ll n, m;
   cin >> n >> m;
   vector<ll>a(n);
   ll gdc = 0;
   for(ll i = 0; i < n; i++) cin >> a[i];

   for(ll i = 0; i < n-1; i++) 
   {
        gdc = gcd(gdc, a[i+1]-a[i]);
   }

   vector<ll> options;
   for(ll i = 0; i < m; i++)
   {
    ll option; cin >> option;
    options.push_back(option);
   }

   //vector<ll>ans = divisors(gdc);

   for(int i = 0; i < options.size(); i++)
   {
        if(gdc%options[i] == 0)
        {
            cout << "YES\n";
            cout << a[0] << " " << i+1; 
            return;
        }
   }

   cout << "NO";

}

int main()
{
    ahmed();
    int t = 1;
    while(t--)
    {
        solve();
    }
}
