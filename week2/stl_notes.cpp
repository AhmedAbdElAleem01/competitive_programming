#include<bits/stdc++.h>

using namespace std;

vector< int > nums(1e6);
bool comp(pair <int, int> a, pair<int , int> b)
{
    return a.second < b.second;
}
int main()
{
    /// vector
    /**
    int n = 3;
    int m = 12;
    nums.resize(8);
    nums.insert(nums.begin()+2, 5);
    vector< int > copy(8); copy = nums;
    vector< vector< int > >grid(n, vector<int>(m));

    vector<int>numbers = {100, 45, 200, 1};
    sort(numbers.rbegin(), numbers.rend());

    //https://codeforces.com/problemset/problem/490/A (team olympiad)
    //cout<<*max_element(numbers.begin(), numbers.begin()+1);
    **/

    /// set
    /**
    set < int >s;
    for(int i = 0, entry; i < n && cin >> entry; i++){
        s.emplace(entry);
    }
    for(auto& i: s) cout << i << " ";
    cout << s.count(1);
    if(s.find(2) != s.end()) cout << "found";
    s.erase(2); s.erase(s.find(2));
    **/

    /// pair
    /**
    vector< pair<int, int> > times(3);
    for(int i = 0; i < n; i++) cin >> times[i].first, times[i].second = i+1;
    sort(times.rbegin(), times.rend());
    cout << times.front().second;
    **/

    /// map
    int n = 5;
    map<int , int> occ;
    for(int i = 0, entry; i < n && cin >> entry; i++)
    {
        occ[entry]++;
    }

    for(auto& [f, s]: occ) cout << f << " " << s << '\n';


    /**cout << occ.count(1); /// is there or not
    if(occ.find(1) != occ.end()) cout << occ[1]; /// frequency
    occ.erase(1);
    ///occ.begin()->first
    **/
    cout << max_element(occ.begin(), occ.end(), comp)->first;



}
