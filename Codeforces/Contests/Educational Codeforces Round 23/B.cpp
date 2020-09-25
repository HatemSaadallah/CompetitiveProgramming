
// Problem : B. Makes And The Product
// Contest : Codeforces - Educational Codeforces Round 23
// URL : https://codeforces.com/contest/817/problem/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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

const int maxn=1e5+10;
int a[maxn];

long long Combination(int n, int m) 
{
    long long ans = 1; 
    for(int i=n; i>=(n-m+1); --i) 
        ans *= i; 
    while(m) 
        ans /= m--; 
    return ans; 
}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    int num[4],tot=0,tmp;
    memset(num,0,sizeof(num));
    num[tot]=1;tmp=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==tmp)
        {num[tot]++;}
        else
        {
            tmp=a[i];
            tot++;
            if(tot>=3) break;
            num[tot]++;
        }
        if(tot!=0&&num[0]>=3) {break;}
    }
    if(num[0]>=3)
    {
        long long ans=Combination(num[0],3);
        cout << ans;
    }
    else if(num[0]+num[1]>=3)
    {
        if(num[0]==1){
            long long ans=Combination(num[1],2);
            cout << ans;
        }
        else{
            cout << num[1];
        }
    }
    else
    {
        cout << num[2];
    }
    return 0;
}



