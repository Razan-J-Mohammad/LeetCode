class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>index;
      vector<int>result;
      for(int i=0;i<nums.size();i++){
        int comp=target-nums[i];
        if(index.find(comp)!=index.end()){
            result.push_back(index[comp]);
            result.push_back(i);
            return result;
        }
        index[nums[i]]=i;
      }
      return result;

    }
};