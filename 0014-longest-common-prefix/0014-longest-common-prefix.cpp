class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp=strs[0];
        for(int i=1; i<strs.size(); i++){
            string temp;
            int j=0;
            while(j<strs[i].size()&&strs[i][j]==lcp[j]){
                temp.push_back(lcp[j]);
                j++;
            }
            lcp=temp;
        }
        return lcp;
    }
};