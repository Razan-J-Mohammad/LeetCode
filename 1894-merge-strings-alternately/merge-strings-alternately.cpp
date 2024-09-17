#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        int i = 0, j = 0;
        string str;

        // Merge the characters alternately
        while (i < n1 || j < n2) {
            if (i < n1) {
                str.push_back(word1[i]);
                i++;
            }
            if (j < n2) {
                str.push_back(word2[j]);
                j++;
            }
        }

        return str;
    }
};
