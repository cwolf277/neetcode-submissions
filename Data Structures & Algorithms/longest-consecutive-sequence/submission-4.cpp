class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int longes= 0;
        int streak =0;
        for(int nums: numset){
            if(!numset.count(nums-1)){
                int curr =nums;
                streak = 1;
            

            while(numset.count(curr+1)){
                streak++;
                curr++;
            }
            if(streak > longes){
                longes = streak;
            }
            }
        }
        return longes;
         
        
        
    }
};
