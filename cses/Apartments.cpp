#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e6 + 5;
int a[N], b[N];
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    for(int i=0; i < n; ++i){
        cin >> a[i];
    }
    for(int i=0; i < m; ++i){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    int p1 = 0, p2 = 0;
    int ans = 0;
    while(true){
        if(p1 >= n || p2 >= m) break;
        if(a[p1] - k <= b[p2] && a[p1] + k >= b[p2]){
            ans++;
            p1++;
            p2++;
        } else if(a[p1] - k > b[p2]){
            p2++;
        } else if(a[p1] + k < b[p2]){
            p1++;
        }
    }
    cout << ans << endl;
}