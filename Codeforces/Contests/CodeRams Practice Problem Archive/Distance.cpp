#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    double x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    double h1 = pow(x2-x1, 2);
    double h2 = pow(y2-y1, 2);
    double sq = sqrt(h1 + h2);
    cout << fixed;
    cout << setprecision(16);
    cout << sq;
}