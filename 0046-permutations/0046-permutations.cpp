class Solution {
public:
    void DFS(vector<int>& nums, vector<vector<int>>& ans, vector<int>& res, int n, vector<int>& vis){
        if(res.size()==n){
            ans.push_back(res);
            return;
        }
        for(int i=0; i<n; i++){
            if(vis[i]==0){
                vis[i]=1;
                res.push_back(nums[i]);
                DFS(nums, ans, res, n, vis);
                res.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int> vis(n, 0);
        vector<vector<int>> ans;
        vector<int> res;
        DFS(nums, ans, res, n, vis);
        return ans;
    }
};