#include <iostream>


#define ll unsigned long long
using namespace std;
int main()
{
    ll n; ll m;
    cin >> n >> m;
    ll flag = 0;
    ll a[n+1] = {0};
    for(int i = 1; i <= n; i++)cin >> a[i];

    for(int i = 1; i <= n; i++) a[i] += a[i-1];

    int i;
    for(i = 1; i <= n ;i++)
    {
        if(a[i] >= m){
            flag = 1;
            break;
        }
    }
    (flag == 0)? cout << -1: cout << i;
}
