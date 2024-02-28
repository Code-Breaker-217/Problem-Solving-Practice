class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        for(int i=0; i<intervals.size(); i++){
            if(i==0){
                result.push_back(intervals[i]);
            }
            else if(result.back()[1] >= intervals[i][0]){
                if(result.back()[1] >= intervals[i][1]){
                    continue; // do nothing (case: [[1,4],[2,3]] => [[1,4]])
                }
                result.back()[1] = intervals[i][1];
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};