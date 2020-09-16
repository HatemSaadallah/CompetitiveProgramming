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

int dp[100005];


double power(int a, int b){
    if (b==0)
        return 1LL;
    if(b==1)
        return a*1LL;
    if(b%2==0){
        int x = power(a, b/2);
        x=(x*x)%mod;
        return x;
    }
    else{
        int x=power(a, (b-1)/2);
        x=(x*x)%mod;
        return (x*a)%mod;
    }
}

int32_t main() 
{
    fast;
   
	int n, k;
    cin >> n >> k;
    for(int i=k; i>=1; i--){
        dp[i] = power(k/i, n);
        for(int j=2*i; j <= k; j+=i){
            dp[i] -= dp[j];
        }
    }
    int res = 0;
    for(int i = 1; i <= k; i++){
        res = (res+(dp[i]*i)%mod)%mod;
    }
    cout << res%mod;

    return 0;
}