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

bool check_key(map<int, int> m, int key) 
{ 
    if (m.find(key) == m.end()) 
        return false; 
  
    return true; 
} 

void solve(int n, int c0, int c1, int h){
    string binary; 
    cin >> binary;
    int res = 0;
    int zeros = 0;
    int ones = 0;
    for(auto thing: binary){
        if(thing == '0'){
            zeros++;
        } else{
            ones++;
        }
    }
    res = zeros*c0 + ones*c1;
    // Switching everything to one
    int allZeros = zeros*c0;
    int changingPrice = ones*h;
    allZeros += changingPrice;

    allZeros += ones*c0;

    res = min(res, allZeros);

    int allOnes = ones*c1;
    changingPrice = zeros*h;
    allOnes += changingPrice;

    allOnes += zeros*c1;
    res = min(res, allOnes);

    cout << res << endl;
}

int32_t main() 
{
    fast;
    int t;
    cin >> t;
    rep(i, t){
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        solve(n, c0, c1, h);
      }
}
