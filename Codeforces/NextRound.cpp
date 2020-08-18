#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> x;
    for(int i = 0; i<n; i++){
        int l;
        cin >> l;
        x.push_back(l);
    }
    int output = 0;
    for(auto hi: x){
        if (hi >= x[k-1] && hi > 0)
            output++;
    }
    cout << output;
}