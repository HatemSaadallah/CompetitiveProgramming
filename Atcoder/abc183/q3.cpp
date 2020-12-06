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
	int n, k;
	cin >> n >> k;
  vector<vector<int>> x;
	rep(z, n){
    vector<int> temp(n);
    rep(i, n){
        int c;
        cin >> c;
        temp[i] = c;
    }
    x.pb(temp);
	}
  vector<int> indexes;
  rep(i, n-1){
    indexes.push_back(i+1);
  }
  //for(auto thing: indexes){
    //cout << thing << " ";
  //}
  vector<int> res;
  do {
    //for(auto thing: indexes){
      //cout << thing << " ";
    //}
    //cout << endl;
    int sum = 0;
    sum += x[0][indexes[0]];
    for(int i=0; i < n-2; i++){
      sum += x[indexes[i]][indexes[i+1]];
    }
    sum += x[indexes[indexes.size()-1]][0];
    res.pb(sum);
  } while (next_permutation(indexes.begin(), indexes.end()));

  int output = 0;
  for(auto thing: res){
    if(thing == k){
      output++;
    }
  }

  cout << output;
  return 0;
}
