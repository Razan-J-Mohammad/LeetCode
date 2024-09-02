

class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> words;
        string filtered;
        
        for (size_t i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (isalnum(c)) {
                char lowerChar = tolower(c);
                words.push(lowerChar); 
                filtered += lowerChar; 
            }
        }
        
        string reversed;
        
        while (!words.empty()) {
            reversed += words.top();
            words.pop();
        }
        
        return reversed == filtered;
    }
};
