#include <iostream>
#include <vector>
using namespace std;

string checking(vector<int> lol, int time){
    for(int h = 0; h < lol.size()-1; h++){
        if(lol[h+1]-lol[h] < time){
            return "YES";
        }
    }
    return "NO";
}

int main(){
    int n;
    cin >> n;
    vector<int> x;
    for(int l = 0; l < n; l++){
        int num_of_times, time;
        cin >> num_of_times >> time;

        for(int m = 0; m < num_of_times; m++){
            int cars;
            cin >> cars;
            x.push_back(cars);
        }

        cout << checking(x, time) << endl;
    }
}