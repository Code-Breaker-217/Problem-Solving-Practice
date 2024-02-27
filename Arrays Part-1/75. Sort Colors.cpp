class Solution {
public:
    void sortColors(vector<int>& nums) {
        // pointers pointing to index of ones and twos
        int zeros=0;
        int twos=nums.size()-1;

        // putting all zeros at it's correct position
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                swap(nums[i],nums[zeros]);
                zeros++;
            }
        }

        // putting all twos at it's correct position
        for(int i=nums.size()-1; i>=zeros; i--){
            if(nums[i]==2){
                swap(nums[i], nums[twos]);
                twos--;
            }
        }
    }
};