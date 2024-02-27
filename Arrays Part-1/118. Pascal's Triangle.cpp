class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas;
        vector<int> inter;

        for(int i=1;i<=numRows;i++){
            int C = 1;
            for(int j=1;j<=i;j++){
                inter.push_back(C);
                C = C * (i - j) / j;
            }
            pas.push_back(inter);
            inter.clear();   
        }
        return pas;
    }
};