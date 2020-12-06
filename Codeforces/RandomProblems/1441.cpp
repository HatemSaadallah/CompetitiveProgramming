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

bool check_palindrome(string x){
    string first_half;
    string second_half;
    if(x.length()==1){
        return true;
    }
    if(x.length() == 2){
        if(x[0] == x[1]){
            return true;
        } else{
            return false;
        }
    }
    if(x.length()%2==0){
        first_half = x.substr(0, x.length()/2);
        second_half = x.substr(x.length()/2);
        reverse(second_half.begin(), second_half.end());
        if(first_half == second_half){
            return true;
        }
    } else {
        first_half = x.substr(0, x.length()/2); 
        second_half = x.substr(x.length()/2+1);
        reverse(second_half.begin(), second_half.end());
        if(first_half == second_half){
            return true;
        }
    }
    return false;
}

int32_t main() 
{
    fast;
    int t;
    cin >> t;
    rep(i, t){
        int n;
        cin >> n;
        int k = n, u = n;

        if(n < 10){
            cout << n << endl;
            continue;
        }
        while(true){
            string u_s = to_string(u);
            string k_s = to_string(k);
            if(check_palindrome(u_s)){
                cout << u_s << endl;
                break;
            }
            if(check_palindrome(k_s)){
                cout << k_s << endl;
                break;
            }
            k--; 
            u++;
        }
    }

}
