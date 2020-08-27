#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
#include <math.h>
#include <sstream>
#include <iterator>

using namespace std;
// #define endl ("\n")
// #define pi (3.141592653589)
// #define mod 1000000007
// #define int long long
// #define float double
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(c) c.begin(), c.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)
// #define rep(i, n) for (int i = 0; i < n; i++)
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    vector<string> x;
    cin >> t;
    for(int i = 0; i <= t; i++)
    {
        string oneLine;
        getline(cin, oneLine);
        x.push_back(oneLine);
    }
    int flag = 0;
    string trimmed = "";
    for(auto thing: x){
        trimmed += thing;
        trimmed += " ";
    }
    istringstream buf(trimmed);
    istream_iterator<string> beg(buf), end;

    vector<string> tokens(beg, end); 
    // for(auto& s: tokens){
    //     cout << s << " ";
    // }

    for(int i = tokens.size()-1; i > 0; i--){
        for(int n = 0; n < tokens.size()-1; n++){
            if(tokens[i] == tokens[n]){
                
            }
        }
    }
    return 0;
}