
// Problem : B. Primes
// Contest : Codeforces - The 2019 University of Jordan Collegiate Programming Contest
// URL : https://codeforces.com/gym/102267/problem/B
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

void SieveOfEratosthenes(int n) 
{  
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {   
            for (int i=p*p; i<n; i += p) 
                prime[i] = false; 
        } 
    } 
	
	  
    for (int p=2; p<n; p++){
       if (prime[p] && prime[n-p] ){
          cout << p << " " << n-p << endl;
          return;
}  }
	
	cout << -1;
	return;
}

int32_t main() 
{
    fast;
	int n;
	cin >> n;
	
	SieveOfEratosthenes(n);
	// cout << -1;
}


