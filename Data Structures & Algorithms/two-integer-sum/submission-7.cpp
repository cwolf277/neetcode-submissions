class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

         unordered_map<int, int> count;

    for(int i=0; i< nums.size(); i++){
      int c = target - nums[i];
      
      if(count.count(c)){
        return {count[c],i};
      }

      count[nums[i]] = i;

    }
    return{};
    }
    
};