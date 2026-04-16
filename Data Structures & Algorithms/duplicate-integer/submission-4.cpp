class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // goal: the goal is to look through an array
        // and see if a number appears twice

        //brute force


        bool h;
        for(int i =0; i< nums.size(); i++){
            for(int j = i+1; j< nums.size(); j++){
                 cout << nums[i]<< nums[j] <<endl;
                if(nums[i] == nums[j]){
                   
                    return true;
                }
            }
        }

        return false;
    }

    
};
