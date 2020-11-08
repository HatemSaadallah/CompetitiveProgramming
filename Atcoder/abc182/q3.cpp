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

int check(string str) 
{ 
	int n = str.length(); 
	int digitSum = 0; 
	for (int i=0; i<n; i++) 
		digitSum += (str[i]-'0'); 

	return (digitSum % 3 == 0); 
} 

int32_t main() 
{
	fast;
	string N;
	cin >> N;
	int res = 12345;
	int deleted = 0;
	for (int i = 1; i < pow(2, N.length()); i++) {
		int sum = 0;
		deleted = 0;
		for (int j = 0; j < N.length(); j++) {
			if (i >> j & 1) {
				sum += N[j] - '0';
			} else {
				deleted++;
			}
		}
		if(sum % 3 == 0 && sum > 0) {
			res = min(res, deleted);
		}
	}
	cout << (res == 12345 ? -1 : res) ;
}

