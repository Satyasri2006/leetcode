class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a(1,0);
        vector<vector<int>> arr;
        for(int i=0; i<rowIndex+1; i++){
            vector<int> row(i+1,1);
            arr.push_back(row);
            if(i>=2){
                for(int j=1; j<i; j++){
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                }
            }
            if(i==rowIndex)return arr[i];
        }
        return a;
    }
};