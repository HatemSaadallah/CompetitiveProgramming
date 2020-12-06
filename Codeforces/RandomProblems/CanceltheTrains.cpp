/*input

*/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <sstream>
#include <iterator>
#include <cstdlib>
#include <unordered_map>
#include <map>

using namespace std;

#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define int int
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

bool check_key(map<int, int> m, int key)
{
    if (m.find(key) == m.end())
        return false;

    return true;
}

int main()
{
    fast;
	int t;
	cin >> t;
	rep(i, t){
        int n, m;
        cin >> n >> m;
        vector<int> x;
        vector<int> y;
        rep(i, n){
            int n1;
            cin >> n1;
            x.pb(n1);
        }
        rep(i, m){
            int n1;
            cin >> n1;
            y.pb(n1);
        }
        int res=0;
        rep(i, n){
            rep(j, m){
                if(x[i] == y[j]){
                  res++;
                }
            }
        }
        cout << res << endl;
	}
	return 0;
}

