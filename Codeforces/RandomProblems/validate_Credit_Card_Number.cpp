#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
class Kata
{
public:
    static bool validate(long long int n)
    {
        stringstream ss;
        ss << n;
        string s;
        ss >> s;
        int doubleEvenSum = 0;
        for (int i = s.length() - 2; i >= 0; i = i - 2)
        {
            int dbl = ((s[i] - 48) * 2);
            if (dbl > 9)
            {
                dbl = (dbl / 10) + (dbl % 10);
            }
            doubleEvenSum += dbl;
        }

        // Step 2 is to add every odd placed digit from the right to the value
        // 'doubleEvenSum'.

        for (int i = s.length() - 1; i >= 0; i = i - 2)
        {
            doubleEvenSum += (s[i] - 48);
        }
        return doubleEvenSum % 10 == 0 ? true : false;
    }
};

int main()
{
    Kata *foo1 = new Kata();
    cout << foo1->validate(232422);
}