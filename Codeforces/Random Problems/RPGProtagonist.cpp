#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h> 
#include <math.h>

using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define lp(i,s,f) for(ll i=s; i < ll(f); i++)
#define inF freopen("input.in", "r", stdin);
#define outF freopen("output.in", "w", stdout);
#define endl '\n'
#define MOD 1000000007
#define mm(arr) memset(arr, 0, sizeof(arr))

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int p, f;
        cin>>p>>f;
        if (p>f) swap(p,f);
        int cnts, cntw;
        cin >> cnts >> cntw;
        int s, w;
        if(s>w){
            swap(s, w);
            swap(cnts, cntw);
        }
        
        cin >> s >> w;
        int output = 0;
        
    }
}