class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, size=0;
        for(i=0; i<haystack.size(); i++){
            if(size==needle.size())break;
            if(haystack[i]==needle[size])size++;
            else{
                if(size>0){
                    i-=size;
                }
                size=0;
            }
        }
        if(size<needle.size())return -1;
        return i-size;
    }
};