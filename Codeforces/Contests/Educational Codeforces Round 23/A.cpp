
// Problem : A. Treasure Hunt
// Contest : Codeforces - Educational Codeforces Round 23
// URL : https://codeforces.com/contest/817/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
#define int int64_t
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
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x, y;
	cin >> x >> y;
	if(abs(x1-x2) % x == 0 && abs(y1-y2) % y == 0 && (abs(x1-x2))/x % 2 == (abs(y1-y2)/y) % 2) cout << "YES";
	else cout << "NO";
	
}


