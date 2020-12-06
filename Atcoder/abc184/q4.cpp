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
    int a, b, c;
    cin >> a >> b >> c;

    double dp[105][105][105];
    for (int i = 99; i >= a; i--) {
        for (int j = 99; j >= b; j--) {
            for (int k = 99; k >= c; k--) {
                dp[i][j][k] += dp[i + 1][j][k] * i / (i + j + k);
                dp[i][j][k] += dp[i][j + 1][k] * j / (i + j + k);
                dp[i][j][k] += dp[i][j][k + 1] * k / (i + j + k);
                dp[i][j][k]++;
            }
        }
    }
    printf("%.10f\n", dp[a][b][c]);

}
