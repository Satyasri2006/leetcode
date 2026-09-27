class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int a=0, b=matrix.size()-1; // a-0 b-2
        int x=0, y=matrix[0].size()-1; // x-0 y-3
        while(a<=b&&x<=y){
            for(int j=x; j<=y; j++)res.push_back(matrix[a][j]);
            a++;
            if(a>b||x>y)break;
            for(int i=a; i<=b; i++)res.push_back(matrix[i][y]);
            y--;
            if(a>b||x>y)break;
            for(int j=y; j>=x; j--)res.push_back(matrix[b][j]);
            b--;
            if(a>b||x>y)break;
            for(int i=b; i>=a; i--)res.push_back(matrix[i][x]);
            x++;
            if(a>b||x>y)break;
        }
        return res;
    }
};