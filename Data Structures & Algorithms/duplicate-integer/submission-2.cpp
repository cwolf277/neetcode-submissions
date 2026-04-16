class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int k =0;
        sort(nums.begin(), nums.end());

        for(int i = 1; i< nums.size();i++){
            if(nums[i] == nums[k]){
                return true;
            }
            k++;
        }
        
    return false;
    }

    
};
