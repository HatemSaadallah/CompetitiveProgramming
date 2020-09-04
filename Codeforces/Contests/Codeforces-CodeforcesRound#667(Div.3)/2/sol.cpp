
/**
 *    author        : Hatem 
 *    created       : September 04, 2020 5:35 PM
 *    Problem Name  : B. Minimum Product
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/B
 *    @genarated by : ai-virtual-assistant
 **/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h> 
#include <math.h>
#include <sstream>
#include <iterator>

using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
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
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int32_t main(){
	fast
	int t;
	cin >> t;
	while(t--){
		int a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		int smallesta = max(x, a-n);
		int smallestb = max(y, b-n);

	if(smallesta < smallestb){
		int r = min(a-x, n);
		a -= r;
		n -= r;
		r = min(b-y, n);
		b -= r;
		cout << a*b << endl;
	} else {
		int r = min(b-y, n);
		b -= r;
		n -= r;
		r = min(a-x, n);
		a -= r;
		cout << a * b << endl;
	}	
	}


		return 0;
}
