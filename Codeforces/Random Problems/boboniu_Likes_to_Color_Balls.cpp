#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define NO_OF_CHARS 256 

bool canFormPalindrome(string str) 
{ 
    // Create a count array and initialize all  
    // values as 0 
    int count[NO_OF_CHARS] = {0}; 
   
    // For each character in input strings, 
    // increment count in the corresponding 
    // count array 
    for (int i = 0; str[i];  i++) 
        count[str[i]]++; 
   
    // Count odd occurring characters 
    int odd = 0; 
    for (int i = 0; i < NO_OF_CHARS; i++) 
    { 
        if (count[i] & 1) 
            odd++; 
  
        if (odd > 1) 
            return false; 
    } 
   
    // Return true if odd count is 0 or 1,  
    return true; 
} 

int main(){
    int n;
    cin >> n;
    vector<string> x;
    for(int i = 0; i < n; i++){
        string temp = "";
        int n1, n2, n3, n4;
        cin >> n1 >> n2 >> n3 >> n4;
        for(int z=0; z<n1; z++){
            temp += 'r';
        }
        for(int z=0; z<n2; z++){
            temp += 'g';
        }
        for(int z=0; z<n3; z++){
            temp += 'b';
        }
        for(int z=0; z<n4; z++){
            temp += 'w';
        }

        x.push_back(temp);
    }

    for(auto z: x){
        cout << canFormPalindrome(z)+2;
    }
}