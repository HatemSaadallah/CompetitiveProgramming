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
	int t = 0;
	int maxNum = 0;
	cin >> t;
	vector<int> x(t, 0);
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		x[i] = n;
		if(maxNum < x[i]){
			maxNum = x[i];
		}
	}

	int res = 1;
	int value = 0;
	for(int j=2; j<maxNum+1; j++){
		int cValue = 0;
		for(int i=0; i<t; i++){
			if(x[i] % j == 0){
				cValue += 1;
			}
		}
		if(cValue >= value){
			res = j;
			value = cValue;
		}
	}
	cout << res;
	return 0;
}

