class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       if(prices.empty())return 0;
       int mn=prices[0];
       int price=0;
       for(int i=1;i<n;i++){
        if(mn>prices[i])
        mn=prices[i];
        else if(price<prices[i]-mn)
        price=prices[i]-mn;
       }
       
       return price;
    }
};
