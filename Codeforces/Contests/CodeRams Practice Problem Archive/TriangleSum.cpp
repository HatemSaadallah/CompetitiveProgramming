#include <iostream>


using namespace std;
int main(){
    int n;
    cin >> n;
    int output = 0;
    for(int i = 0; i < n; i++){
        int r;
        cin >> r;
        output += r*3;
    }

    cout << output;
}