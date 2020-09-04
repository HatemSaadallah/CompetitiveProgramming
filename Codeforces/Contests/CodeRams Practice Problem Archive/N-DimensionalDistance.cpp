#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> x;
    for (int i = 0; i < n; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> temp;
        temp.push_back(n1);
        temp.push_back(n2);
        x.push_back(temp);
    }

    auto sum = 0;
    for (auto l : x)
    {
        sum += pow(l[0] - l[1], 2);
    }
    cout << fixed;
    cout << setprecision(20);
    double b = sqrt(sum);
    // cout << b;

    stringstream stream;
    stream << std::fixed << std::setprecision(20) << b;
    if(floor(b) == b){
        printf("%.1lf", b);
    } else{
        cout << stream.str().substr(0, 18);
    }
}