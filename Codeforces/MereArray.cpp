#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC optimize ("-O3")
#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15
 
int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)	{
    	int n;
    	cin >> n;
    	int array[n];
    	int minValue = INT_MAX;
    	for(int i = 0; i < n; i++)	{
    		cin >> array[i];
    		minValue = min(minValue, array[i]);
    	}
    	vector<int> v;
    	for(int i = 0; i < n; i++)	{
    		if((array[i] % minValue) == 0)	{
    			v.push_back(array[i]);
    			array[i] = 0;
    		}
    	}
    	sort(all(v));
    	int j = 0;
    	for(int i = 0; i < n; i++)	{
    		if(array[i] == 0)	{
    			array[i] = v[j];
    			j++;
    		}
    	}
    	int flag = 1;
    	for(int i = 1; i < n; i++)	{
    		if(array[i] < array[i-1])	{
    			flag = 0;
    		}
    	}
    	if(flag)	{
    		cout << "YES\n";
    	} else 	{
    		cout << "NO\n";
    	}
    }
    return 0;
}