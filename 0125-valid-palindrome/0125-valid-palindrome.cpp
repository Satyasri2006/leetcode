class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]+32;
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))res+=s[i];
        }
        string rev=res;
        reverse(rev.begin(), rev.end());
        return rev==res;
    }
};