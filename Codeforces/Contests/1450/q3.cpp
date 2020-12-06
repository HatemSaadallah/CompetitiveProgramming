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
	rep(i, t){
        int n;
        cin >> n;
        vector<string> x;
        rep(j, n){
            string s;
            cin >> s;
            x.pb(s);
        }
        unordered_map<string, int> x1;
        int tokens = 0;

        rep(j, n){
            int streak = 0;
            rep(k, n){
                if(x[j][k] == 'X'){
                    streak++;
                    tokens++;
                }
                if(streak == 3){
//                    x[j][k] = 'O';
                    string placeHolder = "";
                    placeHolder += to_string(j);
                    placeHolder += to_string(k-1);
                    x1[placeHolder]++;
                    streak = 0;
                }

            }
        }
        rep(j, n){
            int streak = 0;
            rep(k, n){
                if(x[k][j] == 'X'){
                    streak++;
                }
                if(streak == 3){
//                    x[k][j] = 'O';
                    string placeHolder = "";
                    placeHolder += to_string(k);
                    placeHolder += to_string(j-1);
                    x1[placeHolder]++;
                    if(x1[placeHolder] >= 2){
                        x[k][j-1] = 'O';
                    }
                    streak = 0;
                }
            }
        }
        cout << "=================" << endl;

        rep(j, n){
            rep(k, n){
                cout << x[j][k];
            }
            cout << endl;
        }
	}
}

