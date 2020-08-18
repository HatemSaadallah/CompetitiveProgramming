#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string input;
    cin >> input;
    vector<string> indexes;
    int n = 0;
    for (int i = input.length(); i >= 0; i--)
    {
        n++;
        indexes.push_back(input.substr(i));
    }

    sort(indexes.begin(), indexes.end());
    for (auto i : indexes)
    {
        for (int l = 0; l <= input.length(); l++)
        {
            if (i == input.substr(l))
            {
                cout << l << " ";
                break;
            }
        }
    }
}