#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e6 + 5;
int a[N];
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int ans = 0;
    int p1=0, p2=n-1;
    while(p1<=p2){
        if(a[p1]+a[p2]<=x) {
            p1++;
            p2--;
            ans++;
        } else if(a[p2] + a[p1] > x) {
            p2--;
            ans++;
        }
    }
    cout << ans << endl;
}