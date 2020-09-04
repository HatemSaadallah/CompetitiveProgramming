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

int count(string s, char c) {
	int count = 0;

	for (int i = 0; i < s.size(); i++)
		if (s[i] == c) count++;

	return count;
}

string checkLettersJuggled(vector<string> x, int n){
	string stringConcated = "";
	for(auto thing: x){
		stringConcated += thing;
	}
	for(auto character: stringConcated){
		if(count(stringConcated, character) % x.size() != 0) {return "NO";}
	}
	return "YES";
}

int32_t main(){
	fast

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<string> x;
		while(n--){
			string input;
			cin >> input;
			x.push_back(input);
		}
		cout << checkLettersJuggled(x, n) << endl;
	}	

	return 0;
}



