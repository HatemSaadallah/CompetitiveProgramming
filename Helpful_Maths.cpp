#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string n;
    cin >> n;
    vector<string> x;
    
    for(int i = 0; i < n.length(); ++i){
        if (n[i] != '+'){
            x.push_back(n[i]);
        }
    }

}