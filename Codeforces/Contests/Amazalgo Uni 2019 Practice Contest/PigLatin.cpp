#include <iostream>
#include <cstring>
#include <vector>
#include <string.h>
#include <cctype>

using namespace std;

int main()
{
    int n;
    vector<string> x;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        string m;
        getline(cin, m);
        x.push_back(m);
    }
    for (auto word : x)
    {
        cout << word[0];
    }
}