#include <iostream>
#include <math.h>

using namespace std;
int main(){
    long long x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    cout << sqrtf(powf(x2-x1, 2) + powf(y2-y1, 2));
}