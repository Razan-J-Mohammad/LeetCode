class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
      int par=0;
      int row=grid.size();
      int col=grid[0].size();
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            if(grid[i][j]==1){
                par+=4;
            
            if(i>0&&grid[i-1][j]==1)
                par-=2;
            
            if(j>0&&grid[i][j-1]==1) par-=2;
            }
        }  
     
        }
         return par;
    }
};