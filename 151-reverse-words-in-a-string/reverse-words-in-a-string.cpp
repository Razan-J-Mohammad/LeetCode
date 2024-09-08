#include <stack>
#include <string>
#include <sstream>
#include <algorithm>

class Solution {
public:
    std::string reverseWords(std::string s) {
        stack<string>words;
        string word;
        stringstream ss(s);
        while(ss>>word){
            words.push(word);
        }
        string result;
        while(!words.empty()){
            result+=words.top();
            words.pop();
            if(!words.empty()){
                result+=" ";
            }
        }
        return result;
    }
};
