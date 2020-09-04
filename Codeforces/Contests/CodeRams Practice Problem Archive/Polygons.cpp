#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int r;
        cin >> r;
        switch(r){
            case 3:
                cout << 180 << endl;
                break;
            default:
                cout << 180 + (r-3)*180 << endl;
        }

    }
}