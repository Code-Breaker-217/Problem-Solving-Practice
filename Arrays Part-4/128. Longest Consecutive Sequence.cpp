// using set
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Logic intends to check if there exists a previous element in the array that is part of the lcs series and if there are no prev. elements , a while loop to increment the count and acc. find out the lcs  (Implemented using Hashing Concept)  
        //TC: O(N)-->for iterations
        //SC: O(N)-->for map/set
        //Another valid logic would be to sort and check-->TC: O(N Log N)
        unordered_set<int>s;  //unordered_set can be used as an alternative
        for(auto it:nums){
            s.insert(it);
        }
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)!=s.end()){  //checking if there are elems smaller than curr_element
                continue;  //yes there are so we iterate to next element and skip process here
            }
            //no previous element so execute this statement (iff true)
            int k=nums[i],cnt=0;
            while(s.find(k++)!=s.end()){ //checking the lcs
                cnt++;  //counter++
            }
            maxx=max(cnt,maxx);  //update max lcs
        }
        return maxx;  //return max lcs
    }
};



// Using unordered map
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Logic intends to check if there exists a previous element in the array that is part of the lcs series and if there are no prev. elements , a while loop to increment the count and acc. find out the lcs  (Implemented using Hashing Concept)  
        //TC: O(N)-->for iterations
        //SC: O(N)-->for map/set
        //Another valid logic would be to sort and check-->TC: O(N Log N)
        unordered_map<int,bool>m;  //unordered_set can be used as an alternative
        for(auto it:nums){
            m[it]=true;
        }
        int maxx=0; 
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            if(m[nums[i]-1]){  //checking if there are elems smaller than curr_element
                continue;  //yes there are so we iterate to next element and skip process here
            }
            if(m[nums[i]]){  //no previous element so execute this statement (iff true)
                int k=nums[i];
                while(m[k++]){  //checking the lcs
                    cnt++;  //counter++
                }
            }
            maxx=max(cnt,maxx);  //update max lcs
        }
        return maxx;  //return max lcs
    }
};