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

bool check_key(map<char, int> m, char key) 
{ 
    if (m.find(key) == m.end()) 
        return false; 
  
    return true; 
} 

int32_t main() 
{
	fast;
	string t;
	cin >> t;
	map<char, int> x;
	rep(i, t.length()){
		if(check_key(x, t[i]))
			x[t[i]]++;
		else
			x[t[i]] = 1;
	}
	vector<bool> output(26, NULL);
	for(auto thing: x){
		output[thing.first-97] = true;
	}
	rep(i, 26){
		if (output[i] == 0){
			cout << (char)(i+97);
			return 0;
		}
	}
	cout << "None";
	return 0;
}



