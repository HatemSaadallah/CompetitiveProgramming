// Create your own template by modifying this file!
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <sstream>
#include <iterator>

using namespace std;

#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
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
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {
        cerr<<v<<" ";
        return *this;
    }
} dbg;

int32_t main()
{
    fast;
	int t;
	cin >> t;
	while(t--){
        int t1; cin >> t1;
        vector<int> x;
        while(t1--){
            int n;
            cin >> n;
            x.push_back(n);
        }
        if (*max_element(x.begin(), x.end()) < 0){
            sort(x.begin(), x.end());
            reverse(x.begin(), x.end());
            int res = 1;
            for(int i = 0; i < 5; i++){
                res *= x[i];
            }
            cout << res;
        }
	}
}


