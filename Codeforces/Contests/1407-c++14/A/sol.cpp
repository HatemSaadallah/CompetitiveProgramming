// Create your own template by modifying this file!
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
	int t;
	cin >> t;
	while(t--){
		int num;
		cin >> num;
		int zeroCount = 0, oneCount = 0;
		int totalSize = 0;
		while(num--){
			int n;
			cin >> n;
			if(n==0){
				zeroCount++;
			}else{
				oneCount++;
			}
			totalSize++;
		}
		if(zeroCount >= oneCount){
			cout << zeroCount << endl;
			while(zeroCount--){
				cout << 0 << " ";
			}
			cout << endl;
		}else {
			if (oneCount%2==1) oneCount--;
			cout << oneCount << endl;
			while(oneCount--){
				cout << 1 << " ";
			}
			cout << endl;
		}	
	}		
}



