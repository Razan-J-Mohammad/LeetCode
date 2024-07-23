class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string ,vector<string>>mp;
        string x;
        for(int i=0;i<strs.size();i++){
             x=strs[i];
            sort(x.begin(),x.end());
            mp[x].push_back(strs[i]);

        }//order char and add in first in map;

        vector<vector<string>>ans;

        for(auto i:mp)//loop in block in map 
        {
            vector<string>temp;
            for(int j=0;j<i.second.size();j++){
                temp.push_back(i.second[j]);
             }
           ans.push_back(temp);
        }
        return ans;  
    }
};