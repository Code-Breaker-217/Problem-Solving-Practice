class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp; // num and it's index

        for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];

            if(mp.find(rem)!=mp.end()){
                return {i,mp[rem]};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};