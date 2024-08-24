class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty())return;
        int m=nums.size();
        k = k % m;
        if(k==0)return;
        int n=nums.size()-k;
        vector<int>arr(nums.size(),0);
        int j=0;
        for(int i=n;i<m;i++){
            arr[j]=nums[i];
            j++;
        }
        for(int l=0;l<n;l++){
            arr[j]=nums[l];
            j++;
        }
        for(int i=0;i<m;i++){
            nums[i]=arr[i];
        }
       
    }
};
