class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int majority_ele_1=INT_MIN;
        int majority_ele_2=INT_MIN;
        int count1=0;
        int count2=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==majority_ele_1){
                count1++;
            }
            else if(nums[i]==majority_ele_2){
                count2++;
            }
            else if(count1==0){
                majority_ele_1=nums[i];
                count1=1;
            }
            else if(count2==0){
                majority_ele_2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }

        // verifying are they really eligible to become candidate
        int freq1=0,freq2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==majority_ele_1){
                freq1++;
            }
            else if(nums[i]==majority_ele_2){
                freq2++;
            }
        }

        vector<int> ans;
        if(freq1>nums.size()/3)
            ans.push_back(majority_ele_1);
        if(freq2>nums.size()/3)
            ans.push_back(majority_ele_2);

        return ans;
    }
};