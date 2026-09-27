class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int b=0; b<32; b++){
            int cnt=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]&(1u<<b)){
                    cnt++;
                }
            }
            if(cnt%3!=0){
                res=res|(1u<<b);
            }
        }
        return res;
    }
};