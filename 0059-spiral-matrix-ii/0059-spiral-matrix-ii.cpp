class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int> (n));
        int a=0, b=n-1, x=0, y=n-1;
        int value=1;
        while(a<=b&&x<=y){
            for(int j=x; j<=y; j++){
                matrix[a][j]=value;
                value++;
            }
            a++;
            if(a>b||x>y)break;
            for(int i=a; i<=b; i++){
                matrix[i][y]=value;
                value++;
            }
            y--;
            if(a>b||x>y)break;
            for(int j=y; j>=x; j--){
                matrix[b][j]=value;
                value++;
            }
            b--;
            if(a>b||x>y)break;
            for(int i=b; i>=a; i--){
                matrix[i][x]=value;
                value++;
            }
            x++;
        }
        return matrix;
    }
};