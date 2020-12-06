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
#include <utility>

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
	rep(i, t){
        int n;
        cin >> n;
        vector<int> x;
        unordered_map<int, int> x1;
        rep(c, n){
            int n1;
            cin >> n1;
            x.pb(n1);
            x1[n1]++;
        }
        pair<int, int> maxValue(-1, -1);
        for(auto thing: x1){
            if(thing.ss > maxValue.ss){
                maxValue.ff = thing.ff;
                maxValue.ss = thing.ss;
            }
        }
        bool cnt = 0;
        int res = 0;
        rep(i, n){
            if(x[i] == maxValue.ff){
                if(cnt != 1){
                    cnt = 1;
                }
                if (cnt == 1){
                    if(i > 0 && x[i] != x[i-1]){
                        res++;
                    }
                    if(x1[maxValue.ff] == 1){
                        res = 1;
                        break;
                    }
                    cnt = 0;
                    continue;
                } 
            } else{
               continue; 
            }
        }
        cout << res << endl;
    }
}
