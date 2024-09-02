#include <stack>
#include <string>
#include <sstream>
#include <algorithm>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::stack<std::string> words;
        std::string word;
        std::stringstream ss(s);
        
        while (ss >> word) {
            words.push(word);
        }

        std::string result;
        
        while (!words.empty()) {
            result += words.top();
            words.pop();
            if (!words.empty()) {
                result += " ";
            }
        }
        
        
        return result;
    }
};
