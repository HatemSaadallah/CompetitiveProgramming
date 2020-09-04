#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h> 
#include <math.h>

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

int32_t main(){
    fast
    float n1, n2;
    cin >> n1 >> n2;
    float res = (n1*n2)/(n1+n2);
    cout << res;
    return 0;
}