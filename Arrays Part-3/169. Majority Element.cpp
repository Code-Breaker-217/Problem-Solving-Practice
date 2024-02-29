class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // voting algorithm
        int vote=0;
        int candidate=-1;
        for(int i=0;i<nums.size();i++){
            if(vote==0){
                candidate=nums[i];
                vote++;
            }
            else if(nums[i]==candidate){
                vote++;
            }
            else{
                vote--;
            }
        }
        return candidate;
    }
};