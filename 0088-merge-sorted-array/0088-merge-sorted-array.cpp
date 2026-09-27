class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=m, z=nums2.size();
        for(int i=0; i<z; i++){
            nums1[j++]=nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};