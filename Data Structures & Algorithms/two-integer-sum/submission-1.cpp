class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //goal is to find the two indicies in an array thst would equal up to the target

        //brute force is to have two loops to check if the indicies equal the target 
        // return 0 if not

        vector<int> t;
        for(int i = 0; i< nums.size(); i++){
            for(int j =i+1; j< nums.size(); j++){
                if(nums[i]+ nums[j] ==  target){
                    t.push_back(i);
                    t.push_back(j);

                    return t;
                }
            }
        }

        return t;



    }
};
