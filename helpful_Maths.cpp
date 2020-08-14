#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string n;
    cin >> n;
    vector<char> x;
    
    for(int i = 0; i < n.length(); ++i){
        if (n[i] != '+'){
            x.push_back(n[i]);
        }
    }

    sort(x.begin(), x.end()); 

    for(int l = 0; l < x.size(); l++){
        cout << x[l];
        if (l != x.size()-1)
            cout << "+";
    }    

}