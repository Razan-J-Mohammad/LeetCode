class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        for(int i=0;i<n;i++){
            if(haystack.substr(i,needle.size())==needle)
            return i;
        }
        return -1;
    }
};