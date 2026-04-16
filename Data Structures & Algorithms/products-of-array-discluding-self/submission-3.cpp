class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //goal: 
        // given an integer array 
        // return an integer array that contains the product of all the 
        // integers in the array except for the number at position i

        //constraints:
        // 2 <= nums.length <= 1000
        // -20 <= nums[i] <= 20

        //brute force:
        // loop through the array
        // count how many zeros there are
        // get the multiplication sum of the entire array
        // get the number of zeros
        // second loop 
        // if the array has more than 1 zero every number is 0
        // if the array has 1 zero every number except num is 0
        // divide the multiplied sum with the position i number
        // insert into array
        // return the array

        //alg1:
        // using the two pass algorithm
        // initialise array left
        // initilise array right
        // loop through num and add all the integers on the left of position i
        // loop through backwards and all the integers on the right of position i
        // create another loop and add the elements in left and right
        // return the array





        vector<int> nume;
        vector<int> left;
        vector<int> right;
        int leftp = 1;
        for(int i =0; i< nums.size(); i++){
            left.push_back(leftp);
            // cout<< leftp<< " ";
            leftp*= nums[i];

        }

        int rightp = 1;
        for(int i = nums.size()-1; i>= 0; i--){
            right.push_back(rightp);
            cout<< rightp << " " ;
            rightp*=nums[i];
        }
            
        reverse(right.begin(), right.end());
        for(int i =0; i< nums.size(); i++){
            nume.push_back(right[i] * left[i]);
        }






        return nume;
    }
};
