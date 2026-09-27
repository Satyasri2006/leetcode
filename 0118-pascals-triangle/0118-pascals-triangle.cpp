class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        for(int i=0; i<numRows; i++){
            vector<int> row(i+1,1);
            arr.push_back(row);
            if(i>=2){
                for(int j=1; j<i; j++){
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                }
            }
        }
        return arr;
    }
};