class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string,char>wordTochar;
        map<char,string>charTOword;
        vector<string>v;
        string word;
        stringstream iss(s);
        while(iss>>word){
            v.push_back(word);
        }
            if(v.size()!=pattern.size())  {
              return false;
            }  
            for(int i=0;i<pattern.size();i++){
            string word=v[i];
            if(charTOword[pattern[i]]!="" && charTOword[pattern[i]]!=word){
                return false;
            }
            if(wordTochar[word]&&wordTochar[word]!=pattern[i]){
                return false;
            }
            charTOword[pattern[i]]=word;
            wordTochar[word]=pattern[i];
              
        }
        return true;
        
    }
};