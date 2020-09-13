#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n, l;

    cin >> n >> l;
    if (n <= 10 && l <= 10)
        cout << pow(n, l);
}