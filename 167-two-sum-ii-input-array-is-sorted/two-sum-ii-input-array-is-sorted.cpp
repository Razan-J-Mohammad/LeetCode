class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int n=num.size();
        int i=0,j=n-1;
        vector<int> v;
        while(i<j){
            if(num[i]+num[j]==t){
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            else if(num[i]+num[j]<t)
            i++;
            else j--;
        }
        return v;
    }
};