#include <iostream>
using namespace std;
int main(){
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