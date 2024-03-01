class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])   continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1])   continue;
                long long new_target=target - nums[i];
                new_target-= nums[j];
                int s=j+1,e=n-1;
                while(s<e){
                    if(nums[s]+nums[e]==new_target){
                        res.push_back({nums[i],nums[j],nums[s],nums[e]});
                        s++,e--;
                        while(s<e && nums[s]==nums[s-1])    s++;
                        while(s<e && nums[e]==nums[e+1])    e--;
                    }
                    else if(nums[s]+nums[e]>new_target){
                        e--;
                    }
                    else{
                        s++;
                    }
                }
            }
        }
        return res;
    }
};