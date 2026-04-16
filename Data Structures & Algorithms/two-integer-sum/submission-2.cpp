class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //goal is to find the two indicies in an array thst would equal up to the target

        //brute force is to have two loops to check if the indicies equal the target 
        // return 0 if not

        // better algorithm would be to have a hash map and then add the numbers into that hash 
        // see wich ones add to the target and then return the indicies
        // similar algorithm to anagram one but with <int, int> instead

        unordered_map<int,int> count;

        for(int i = 0; i< nums.size(); i++){
            int c = target - nums[i];

            if(count.count(c)){
                return {count[c], i};
            }
                count[nums[i]] = i;
        }
      

        return {};
    }
};
