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
        // get the multiplication sum of the entire array
        // get the number of zeros
        // second loop divide the multiplied sum with the position i number
        // insert into array




        //alg1:
        vector<int> nume;
        int multipy = 1;
        int zero =0;
        for(auto& num:nums){
            if(num == 0){
                zero++;
            }else{
            multipy *= num;
            cout<< multipy;
            }
        }

        for(auto& num: nums){
            if(zero > 1){
                nume.push_back(0);
            }else if(zero == 1){
                nume.push_back((num == 0)? multipy : 0);
            }else{
           nume.push_back(multipy/ num);
            }
        }
        return nume;
    }
};
