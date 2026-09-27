class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int flag=1;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')st.push(s[i]);
            else{
                if(st.empty()){
                    flag=0;
                    break;
                }
                else if(s[i]==')'&&st.top()=='(')st.pop();
                else if(s[i]=='}'&&st.top()=='{')st.pop();
                else if(s[i]==']'&&st.top()=='[')st.pop();
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1&&st.empty())return true;
        return false;
    }
};