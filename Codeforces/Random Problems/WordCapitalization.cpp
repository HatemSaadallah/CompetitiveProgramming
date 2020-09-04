#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main()
{
    string x;
    cin >> x;
    if (x[0] >= 97)
        printf("%c", x[0]-32);
    else
        printf("%c", x[0]);
    cout << x.substr(1);
}