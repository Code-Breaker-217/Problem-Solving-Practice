// bruteforece|Noob TC: O(nlogn) SC: O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return -1;
    }
};

// as mentioned in Q not to modify nums so we used constant space
// TC: O(n) SC: O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> mp(nums.size()+1,0);
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]]==1){
                return nums[i];
            }
            mp[nums[i]]++;
        }
        return -1;
    }
};

// with nums modification
// TC: O(n) SC: O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};