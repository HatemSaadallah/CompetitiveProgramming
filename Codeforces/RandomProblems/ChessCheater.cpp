// Problem : B. Chess Cheater
// Contest : Codeforces - Codeforces Global Round 11
// URL : https://codeforces.com/problemset/problem/1427/B
// Memory Limit : 256 MB
// Time Limit : 1000 ms
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
	int T;
	cin >> T;
	rep(i, T){
		int N, K;
		cin >> N >> K;
		string S;
		cin >> S;
		int winning_streak = 0;
		int wins = 0;
		int losses = 0;
		vector<int> losing_streaks;
		
		rep(i, N){
			if(S[i] == 'W'){
				wins++;
				if(i==0 || S[i-1] == 'L') winning_streak++;
			}
			if(S[i] == 'L') {
				losses++;
				if(S[i] == 'L'){
					losses++;
					if(i==0 || S[i-1] == 'W') losing_streaks.push_back(0);
					losing_streaks.back()++;
				}
			}
			if(K >= losses) {
				cout << 2*N-1 << "\n";
				continue;
			}
			if(wins == 0){
				if(k)
			}
		}
	}
}


