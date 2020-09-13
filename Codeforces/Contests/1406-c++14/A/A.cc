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

int checkMex(vector<int> x){
    for(int i = 0; i< x.size(); i++){
        if (x[i] != i){
            return i;
        } 
    }
    return x[x.size()-1]+1;
}

int32_t main() 
{
	int t;
	cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> x;
        for (int k = 0; k < n; k++){
            int m;
            cin >> m;
            x.push_back(m);
        }
        sort(x.begin(), x.end());
        vector<int> x1, x2;
        for(int i =0; i < x.size(); i++){
            if(x[i]==0){
                x1.push_back(x[i]);
            } else{
                x2.push_back(x[i]);
            }
        }
        cout << checkMex(x1)+checkMex(x2) << endl;
    }
}


