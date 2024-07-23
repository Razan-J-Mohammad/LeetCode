class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool>Kids(candies.size(),false);
        int max=candies.at(0);//largest number in array
      for(int i=1;i<candies.size();i++){//for loop to find largest number
       if (candies.at(i)>max){
        max=candies.at(i);
        }
    }
    for(int j=0;j<candies.size();j++){
     int result=candies.at(j)+extraCandies;
     if(result>=max){
        Kids[j]=true;
     }
    }
    return Kids;
    }
};//time complixity is n;