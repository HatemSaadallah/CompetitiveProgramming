#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> x;
    for (int i = 0; i <= n; ++i){
        string word;
        getline(cin, word);
        x.push_back(word);
    }

    for(auto thing: x){
        if(thing.length() > 10){
            cout << thing[0] << thing.length()-2 << thing[thing.length()-1];
        } else{
            cout << thing;
        }
        cout << "\n";
    }
}