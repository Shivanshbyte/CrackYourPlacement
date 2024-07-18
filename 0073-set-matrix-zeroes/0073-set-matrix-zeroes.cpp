class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    vector<pair<int,int>> zeroes;
    int cols=matrix[0].size();
    int rows=matrix.size();
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j]==0)
            {
                zeroes.push_back({i,j});
            }
        }
    }
    for(auto pair:zeroes)
    {
        for(int k=0;k<cols;k++)
        {
            matrix[pair.first][k]=0;
        }
        for(int l=0;l<rows;l++)
        {
            matrix[l][pair.second]=0;
        }
    }
     
        
    }
};