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

int minDifferenceAmongMaxMin(int arr[], int N, int K) 
{ 
    sort(arr, arr + N); 
    int res = INT_MAX; 
    for (int i = 0; i <= (N - K); i++) 
    { 
        int curSeqDiff = arr[i + K - 1] - arr[i]; 
        res = min(res, curSeqDiff); 
    } 
  
    return res; 
} 

int32_t main() 
{
    fast;
	int N, K;
cin >> N >> K;
	int x[N+1];
	rep(i, N){
       int n; 
	   cin >> n;
	   x[i] = n;
	}
	cout << minDifferenceAmongMaxMin(x, N, K);
}



