class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int longest =0;
        int streak = 0;
        for(int num: nums){
            if(!set.count(num-1)){
                int curr = num;
                streak =1;
            
            while(set.count(curr+1)){
                streak++;
                curr++;
            }
            if(streak > longest){
                longest = streak;
            }
        }
         }
        return longest;
       
    }
};