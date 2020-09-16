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
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

struct debugger
{
    template <typename T>
    debugger &operator,(const T &v)
    {
        cerr << v << " ";
        return *this;
    }
} dbg;

int getIndex(vector<string> v, string K)
{
    auto it = find(v.begin(),
                   v.end(), K);

    if (it != v.end())
    {
        int index = distance(v.begin(),
                             it);
        return index;
    }
    else
    {
        return -1;
    }
}

int32_t main()
{
    fast;
    int t;
    cin >> t;
    int temp = t-1;
    while (t-- >= 0)
    {
        string word;
        getline(cin, word);
        vector<string> x;

        vector<string> result;
        istringstream iss(word);
        for (string word; iss >> word;)
            x.push_back(word);

        for (auto thing : x)
        {
            if (getIndex(x, thing) == 0)
            {
                cout << (char)toupper(thing[1]) << (string)thing.substr(2) << (char)tolower(thing[0]) << "ay"
                     << " ";
            }
            else
            {
                cout << thing[1] << (string)thing.substr(2) << (char)tolower(thing[0]) << "ay"
                     << " ";
            }
        }
        if (t!=temp)
            cout << endl;
    }
}
