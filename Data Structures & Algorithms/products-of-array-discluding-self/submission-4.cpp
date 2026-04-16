class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //goal given an array we have to out put the multipled numbers
        // of each digit in the array
        
        //brute force would be to double loop 
        // then we multiple every number in the array
        // except its current position
        // and then we add it into the new array

        // better sol would be to grab all the multiples to the left
        // and then all the multiples to the right
        // and then we multiply them all together


        vector<int> output(nums.size());

        vector<int> left(nums.size());

        left[0]= 1;

        for(int i = 1; i< nums.size(); i++){
            left[i] = left[i-1] * nums[i-1];
        }

        vector<int> right(nums.size());
        right[nums.size()-1] =1;
    
        for(int i = nums.size()-2; i>=0; i--){
            right[i] = right[i+1] * nums[i+1];
        }


        for(int i =0; i< nums.size(); i++){

            output[i] = left[i]*right[i];
        }

        return output;

     
        
        
    }
};
