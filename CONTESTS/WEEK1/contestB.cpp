#include <iostream>

using namespace std;
#define ll unsigned long long

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll ar[n];
        ll sod[n];

        int arafa = 0, sodium = 0;

        for(int i = 0; i < n; i++)cin >> ar[i];
        for(int i = 0; i < n; i++)cin >> sod[i];

        for(int i = 1; i < n; i++)
        {
            ar[i]  += ar[i-1];
            sod[i] += sod[i-1];
        }

        for(int i = 0; i < n; i++)
        {
            if(ar[i] > sod[i])
                arafa++;
            else if(sod[i] > ar[i])
                sodium++;
        }

        /*for(int i = 0; i < n; i++)cout << ar[i] << " ";
        cout << '\n';
        for(int i = 0; i < n; i++)cout << sod[i] << " ";
        cout << '\n';*/

        if(arafa > sodium)
            cout << "Arafa"<<'\n';
        else if(arafa < sodium)
            cout << "Sodium" << '\n';
        else
            cout << "Tie" << '\n';
    }
}
