#include <iostream>
using namespace std;

int main(void){
    int h, m, s;
    cin >> h >> m >> s;
    string t;
    cin >> t;

    int output = 0;

    output += h*3600;
    output += m*60;
    output += s;

    if (t == "AM" || t == "am"){
        cout << output;
    } else {
        cout << output + 86400;
    }

}