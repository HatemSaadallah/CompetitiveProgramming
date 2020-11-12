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

int32_t main() 
{
    fast;
    int t;
    cin >> t;
    unordered_map<string, int> x;      	
    pair<string, int> winner = mp("", INT_MIN);

    rep(i, t){
        string name;
        int score;
        cin >> name >> score;
        x[name]+=score;
    }
    for(auto thing: x){
        if(thing.ss > winner.ss){
            winner.ff = thing.ff;
            winner.ss = thing.ss;
        }
    }
    cout << winner.ff<< " " << winner.ss;
    return 0;
}
