class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        if(word1.length() != word2.length()) {
            return false;
        }

        int freq1[26] = {0}; 
        int freq2[26] = {0}; 
        bool word1set[26] = {0}; 
        bool word2set[26] = {0}; 

        for(int i = 0; i < word1.length(); i++) {
            char ch1 = word1[i]; 
            char ch2 = word2[i];
            freq1[ch1 - 'a'] += 1;
            freq2[ch2 - 'a'] += 1;
            word1set[ch1 - 'a'] = true;
            word2set[ch2 - 'a'] = true;
        }

        for(int i = 0; i < 26; i++) {
            if(word1set[i] != word2set[i]) {
                return false;
            }
        }

        bubbleSort(freq1, 26);
        bubbleSort(freq2, 26);
        
        for(int i = 0; i < 26; i++) {
            if(freq1[i] != freq2[i]) {
                return false;
            }
        }
        
        return true; 
    }

private:
    void bubbleSort(int arr[], int n) {
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    std::swap(arr[j], arr[j+1]);
                }
            }
        }
    }
};