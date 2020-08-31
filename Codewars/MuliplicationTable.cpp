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


vector<vector<int>> multiplication_table(int n){
	vector<vector<int>> x;
	vector<int> xi;
	for(int i=1; i <= n; i++){
		xi.push_back(i);
	}
	x.push_back(xi);
	n--;
	for(int m = 0; m < n; m++){
		vector<int> xii;	
		for(int i = 0; i < x[m].size(); i++){
		   	xii.push_back(x[0][i]*(m+2));
		}
		x.push_back(xii);
	}
	return x;	
}

int32_t main(){
    fast
	
	return 0;
}


