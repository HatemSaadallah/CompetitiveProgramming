#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h>
#include <math.h>
#include <sstream>
#include <iterator>
#include <iomanip>

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
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fast

    double T1, T2, T3, R1, R2, R3;
    cin >> T1 >> T2 >> T3 >> R1 >> R2 >> R3;
    double L1, L2, L3;
    L1 = log(R1);
    L2 = log(R2);
    L3 = log(R3);
    double Y1, Y2, Y3;
    Y1 = 1 / T1;
    Y2 = 1 / T2;
    Y3 = 1 / T3;
    double alpha2, alpha3;
    alpha2 = (Y2 - Y1) / (L2 - L1);
    alpha3 = (Y3 - Y1) / (L3 - L1);
    double C, B, A;
    C = ((alpha3 - alpha2) / (L3 - L2)) * (pow(L1 + L2 + L3, -1));
    B = alpha2 - C * (L1 * L1 + L1 * L2 + L2 * L2);
    A = Y1 - L1 * (B + L1 * L1 * C);

    std::ostringstream streamObj;
    //Add double to stream
    streamObj << A;
    std::string strObj = streamObj.str();
    cout << strObj;
    return 0;
}