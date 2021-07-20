#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    set<int> nums;
    int n;
    cin >> n;
    for(int i=0; i < n; ++i){
        int x;
        cin >> x;
        nums.insert(x);
    }
    cout << nums.size() << endl;
}