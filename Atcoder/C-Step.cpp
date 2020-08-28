#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h> 
#include <math.h>
#include <sstream>
#include <iterator>

using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){
    fast
    int t;
    cin >> t;
    vector<int> x;
    while(t--){
        int n;
        cin >> n;
        x.pb(n);
    }
    int res = 0;
    for(int i =1; i < x.size(); i++){
        if (x[i] < x[i-1]){
            res += (x[i-1]-x[i]);
            x[i] = x[i-1];
        }
    }
    cout << res;
    return 0;
}