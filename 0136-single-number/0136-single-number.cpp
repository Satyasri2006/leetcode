class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0,n=nums.size();
        for(int i=0; i<n; i++){
            res=res^nums[i];
        }
        return res;
    }
};