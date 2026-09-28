class Solution {
public:
    void solve(int i, string& digits, map<int, string>& mp, vector<string>& res, string& s, int n){
        if(i>=n){
            res.push_back(s);
            return;
        }
        for(auto x:mp[digits[i]-'0']){
            s.push_back(x);
            solve(i+1, digits, mp, res, s, n);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<int, string> mp;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        vector<string> res;
        string s;
        int n=digits.size();
        solve(0, digits, mp, res, s, n);
        return res;        
    }
};