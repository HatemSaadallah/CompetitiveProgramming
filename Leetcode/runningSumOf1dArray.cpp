class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> x;
            for(int i = 0; i < nums.size(); i++){
            int temp = 0;
            for(int l = 0; l <= i; l++ ){
                temp += nums[l];
            }
            x.push_back(temp);
        }
        
        return x;
    }
};