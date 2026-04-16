class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int longes= 0;
        for(int nums: numset){
            if(!numset.count(nums-1)){
                int curr =nums;
                int streak = 1;
            

            while(numset.count(curr+1)){
                streak++;
                curr++;
            }
            longes = max(longes,streak);
            }
        }
        return longes;
         
        
        
    }
};
