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

string getPalindrome(string str) { 
  
  unordered_map<char, int> hmap; 
  for (int i = 0; i < str.length(); i++) 
    hmap[str[i]]++; 

  int oddCount = 0; 
  char oddChar; 
  for (auto x : hmap) { 
    if (x.second % 2 != 0) { 
      oddCount++; 
      oddChar = x.first; 
    } 
  } 

  if (oddCount > 1 || oddCount == 1 &&  
                  str.length() % 2 == 0) 
    return "NO SOLUTION"; 
  
  string firstHalf = "", secondHalf = ""; 
  for (auto x : hmap) { 
    string s(x.second / 2, x.first); 
    firstHalf = firstHalf + s; 
    secondHalf = s + secondHalf; 
  } 
  
  return (oddCount == 1) ?  
         (firstHalf + oddChar + secondHalf) : 
         (firstHalf + secondHalf); 
} 
int32_t main() 
{
    fast;
    string t;
    cin >> t;
    cout << getPalindrome(t);

}
