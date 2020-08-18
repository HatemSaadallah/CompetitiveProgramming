#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

int findOdd(const std::vector<int> &numbers)
{
    {
        if(count(numbers.begin(), numbers.end(), i) % 2 == 1)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> l = {20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5};
    cout << findOdd(l);
}
