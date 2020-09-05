
/**
 *    author        : Hatem 
 *    created       : September 05, 2020 10:15 PM
 *    Problem Name  : A. The New President
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/gym/100155/problem/A
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
#include <unordered_map> 

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

bool check_key(unordered_map<int, int> m, int key) 
{ 
    if (m.find(key) == m.end()) 
        return false; 
  
    return true; 
} 


int32_t main(){
    fast
	int t; cin >> t;
	while(t--){
		int C, V;
		cin >> C >> V;
		unordered_map<int, int> ballet;
		rep(i, C){
			rep(i, V){
				int n;
				cin >> n;
				if(check_key(ballet, n)){
					ballet[n]++;
				}else{
					ballet[n] = 0;
				}
			}
		
		}
	}
    return 0;
}



