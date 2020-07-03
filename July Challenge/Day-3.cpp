class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        
        N = N%14==0 ? 14 : N%14;
        vector<int> cells2(8,0); 
        while(N>0)
        {
            for(int i=1;i<cells.size()-1;i++)
            {
                cells2[i] = cells[i-1] == cells[i+1] ? 1 : 0;
            }
            cells = cells2;
            N--;
        }
        
        return cells;
    }
};
