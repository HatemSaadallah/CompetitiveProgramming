#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> 
using namespace std;

struct suffix 
{ 
    int index; 
    char *suff; 
}; 
  
// A comparison function used by sort() to compare two suffixes 
int cmp(struct suffix a, struct suffix b) 
{ 
    return strcmp(a.suff, b.suff) < 0 ? 1 : 0; 
} 

int *buildSuffixArray(char *txt, int n) 
{ 
    struct suffix suffixes[n]; 

    for (int i = 0; i < n; i++) 
    { 
        suffixes[i].index = i; 
        suffixes[i].suff = (txt+i); 
    } 
 
    sort(suffixes, suffixes+n, cmp); 
  
    int *suffixArr = new int[n]; 
    for (int i = 0; i < n; i++) 
        suffixArr[i] = suffixes[i].index; 
  
    return  suffixArr; 
} 

void printArr(int arr[], int n) 
{ 
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int main()
{

    // vector<string> indexes;
    // int n = 0;
    // for (int i = input.length(); i >= 0; i--)
    // {
    //     n++;
    //     indexes.push_back(input.substr(i));
    // }

    // sort(indexes.begin(), indexes.end());
    // for (auto i : indexes)
    // {
    //     for (int l = 0; l <= input.length(); l++)
    //     {
    //         if (i == input.substr(l))
    //         {
    //             cout << l << " ";
    //             break;
    //         }
    //     }
    // }
    string input;
    cin >> input;
    int r = input.length();

    char txt[r+1];
    strcpy(txt, input.c_str()); 
    int n = strlen(txt)+1; 
    int *suffixArr = buildSuffixArray(txt,  n); 
    printArr(suffixArr, n); 

}

