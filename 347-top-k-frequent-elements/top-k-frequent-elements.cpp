class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      
        unordered_map<int, int> frequencyMap;
        for (int i = 0; i < nums.size(); ++i) {
            frequencyMap[nums[i]]++;
        }

        vector<pair<int, int>> freqList(frequencyMap.begin(), frequencyMap.end());

        sort(freqList.begin(), freqList.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return b.second < a.second; 
        });

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(freqList[i].first);
        }

        return result;
    }
};
