#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h> 
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

string checking(vector<int> &x){
	sort(x.begin(), x.end());
	for(int i = 0; i < x.size()-1; i++){
		if(x[i+1]-x[i] > 1){
			return "NO";			
		}
	}
	return "YES";	
}

int32_t main(){
	fast
		int t;
	cin >> t;
	while(t--){
		int ti; cin >> ti;
		vector<int> x;
		for(int i = 0; i < ti; i++){
			int n;
			cin >> n;
			x.push_back(n);
		}
		cout << checking(x) << endl;
	}
	return 1;
}

