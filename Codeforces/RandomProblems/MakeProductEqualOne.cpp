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
#include <list> 

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


vector<int> SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));


    vector<int> res;
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++)
        if (prime[p])
            res.push_back(p);
    //cout << p << " ";
    return res;
}

int32_t main()
{
    fast;
	int t;
	cin >> t;
	vector<int> neg, pos;
	int negatives=0, positives=0, zeros=0;
	rep(i, t){
		int n;
		cin >> n;
		if(n>0){
			pos.pb(n);
			positives++;
		} 
		else if(n<0) {
			neg.pb(n);
			negatives++;
		}
		else zeros++;
	}
	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end());
	
	int res = 0;
	if(negatives%2==0){
		for(int num: neg){
			res+=abs(-1-num);
		}
	} else {
		for(int i=1; i < negatives; i++){
			res+=abs(-1-neg[i]);
		}
		if(zeros!=0){
			res++;
			zeros--;
			res+=abs(-1-neg[0]);
		} else {
			res+=abs(1-neg[0]);
		}
	}
	res+=zeros;
	for(int i=0; i < positives; i++){
		res+=abs(pos[i]-1);
	}
	
	cout << res;
	return 0;
}

