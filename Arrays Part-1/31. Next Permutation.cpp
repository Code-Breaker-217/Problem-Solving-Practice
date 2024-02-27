class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1){
            return;
        }
        int gola_indx=-1; // index which capable to give next permutation
        for(int i=n-1; i>=1;i--){
            // next permutation only exist if a no. at certain index is greater than prev index element
            if(nums[i]>nums[i-1]){
                gola_indx = i-1;
                break;
            }
        }

        if(gola_indx!=-1){ // next permutation exist
            // finding no. which is just greater than no. at gola_indx
            // it's possible bcoz no. after that gola_indx are already arranged in decreasing order
            for(int i=n-1; i>gola_indx; i--){
                if(nums[i]>nums[gola_indx]){
                    swap(nums[i],nums[gola_indx]);
                    break;
                }
            }
        }

        // even after swapping, the numbers after the gola_indx are still arranged in decreasing order
        // note: if gola_indx == -1 means no next permutation exist so whole nums will be reversed to give sorted array/nums
        reverse(nums.begin() + gola_indx +1, nums.end());
        return;
    }
};