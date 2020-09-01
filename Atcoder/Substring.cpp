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

bool isSubStr(string string1, string string2){
	if (string1.find(string2) != string::npos) {
		return true;
	}
	return false;
}

int32_t main(){
    fast
	string string1, string2;
	cin >> string1 >> string2;
	string res = "";
	for(int i = 0; i < string2.length(); i++){
		for(int n = 0; n < string2.length(); n++){
			if(isSubStr(string1, string2.substr(i, n))){
				if(string2.substr(i,n).length() > res.length()){
					res = string2.substr(i,n);
				}
			}	
		}
	}
	cout << string1.length()-res.length();
	return 0;
}



