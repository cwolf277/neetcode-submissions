class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //goal we want check in an array
        //if there is a number within the array that is a duplicate

        //constraints
        //

        //brute force
        // we have two loops
        // one loop starts from the first position
        // and checks if it is equal to the other position if it is not 
        // we let it continue
        // if it does equal to the number we want we return true
        // the loop finishes return false;

        // alg1
        // we sort the array 
        //check if position i is equal to position i+1
        // if it does we return true;
        // loop finises return false;

        sort(nums.begin(), nums.end());

        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }

        return false;
        
    }

    
};
