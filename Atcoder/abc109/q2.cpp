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
	vector<string> x;
	rep(i, t){
    string word;
		cin >> word;
		x.pb(word);
	}
	for(auto thing: x){
		if (count(x.begin(), x.end(), thing) > 1){
				cout << "No";
				return 0;
			}
	}
	char lastChar = x[0][x[0].length()-1];
	for(int i=1; i < x.size(); i++){
		//cout << x[i][0];
		if(x[i][0] != lastChar){
			cout << "No";
			return 0;
		} else {
			lastChar = x[i][x[i].length()-1];
			continue;
		}
	}
	cout << "Yes";
	return 0;
}

