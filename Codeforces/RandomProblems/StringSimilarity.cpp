#include <iostream>
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
    while (t--){
        int n;
        string g;
        cin >> n >> g;
        for(int i = 0; i < n; i++){
            cout << g[n-1];
        }
        cout << endl;
    }
}