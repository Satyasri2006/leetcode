class Solution {
public:
    int maxDepth(string s) {
        int maximum=0, cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                cnt++;
                maximum=max(cnt,maximum);
            }
            else if(s[i]==')')cnt--;
        }
        return maximum;
    }
};