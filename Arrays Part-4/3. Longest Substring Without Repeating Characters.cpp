class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int tail=0; int ans=0;
        unordered_map<char, int> mp;
        for(int head=0; head <s.size(); head++){
            mp[s[head]]++;
            while(mp[s[head]]>1){
                mp[s[tail]]--;
                tail++;
            }
            ans = max(ans, head-tail+1);
        }
        return ans;
    }
};