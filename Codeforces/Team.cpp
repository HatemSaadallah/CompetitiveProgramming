#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int output;
    for (int i = 0; i < n; ++i){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int l = n1+n2+n3;
        if (l >= 2){
            output++;
        }
    }
    cout << output;
}