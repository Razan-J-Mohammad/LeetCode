class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> Key; //stor key for each elemant in array nums;

        for (int i = 0; i < nums.size(); ++i) {
            if (Key.find(nums[i]) != Key.end()) {
                if (i - Key[nums[i]] <= k) {
                    return true;
                }
            }//end if
            
            Key[nums[i]] = i;
        }//end for

        return false;
    }
};
