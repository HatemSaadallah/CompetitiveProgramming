
// Problem : A. Fox And Snake
// Contest : Codeforces - Codeforces Round #290 (Div. 2)
// URL : https://codeforces.com/problemset/problem/510/A
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <sstream>
#include <iterator>

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

int32_t main() 
{
    fast;
	int n, m;
	cin >> n >> m;
	bool flag = true;
	for(int i = 1; i <= n; i++){
		for(int k = 1; k <= m; k++){
			if(i%2!=0){
				cout << "#";	
			} else{
				if(i%4==0){
					if(k==1) {
						cout << "#";
					} else {
						cout << ".";
					}
				}
				else if(i%2==0){
					if(k!=m){
						cout << ".";
					} else{
						cout << "#";
					}
				}
			}
		}
		cout << "\n";
	}
}


