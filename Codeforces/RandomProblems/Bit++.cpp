#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int output = 0;
    vector<string> x;
    for(int i = 0; i <= n; ++i){
        string temp;
        getline(cin, temp);
        x.push_back(temp);
    }
    for(auto thing: x){
        for(auto lol: thing){
            if (lol == '+'){
                output++;
                break;
            } else if(lol == '-'){
                output--;
                break;
            }
        }
    }
    cout << output;
}