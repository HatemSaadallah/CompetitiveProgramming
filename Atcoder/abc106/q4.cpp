
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

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}

int binarySearch(vector<int> arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}


int32_t main()
{
    fast;
	int n, m, q;
	cin >> n >> m >> q;
	vector<pair<int, int>> mN(m);
	vector<pair<int, int>> qN(q);
	vector<int> tempM;
	vector<int> tempQ;
	rep(i, m){
        int l1, r1;
        cin >> l1 >> r1;
        mN[i] = mp(l1, r1);
        tempM.pb(l1);
	}
	sort(mN.begin(), mN.end());
	sort(tempM.begin(), tempM.end());
	rep(i, q){
        int p1, q1;
        cin >> p1 >> q1;
        qN[i] = mp(p1, q1);
        tempQ.pb(p1);
	}
	sort(qN.begin(), qN.end());
	sort(tempQ.begin(), tempQ.end());

	int index;
    for(int i=0; i < tempN.size(); i++){

    }
}
