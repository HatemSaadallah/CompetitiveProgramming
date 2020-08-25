#include <iostream>
#include <vector>
#include <cmath>  
using namespace std;

int main()
{
    int t;
    cin >> t;
    // vector<int> x;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        int numOfSteps = 0;
        cin >> n >> k;
        if (n == k)
        {
            cout << 0;
        }
        else
        {
            for(int b = 0; b < n; b++){
                if (abs(n-b) == k){
                    cout << k << endl;
                }
            }
        }
    }
}