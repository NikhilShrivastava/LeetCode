class Solution {
public:
     int islandPerimeter(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int right=0, down=0;
        int count=0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]==1){
                    count++;
                    if(j+1<grid[0].size() && grid[i][j+1]==1)
                        right++;
                    if(i+1 < grid.size() && grid[i+1][j]==1)
                        down++;
                }
            }
        }
        return count*4 - (right + down)*2;
        
    }
};
