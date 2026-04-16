class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //goal:
        // given an array of nums 
        // we have to look through the array to see
        // which numbers in the array are the longest
        // consecuitive sequence with exactly one greater than the 
        // previous

        //constraints:
        // 0 <= nums.length <= 1000
        // -10^9 <= nums[i] <= 10^9

        //brute force:
        // sort array
        // use a double loop 
        // one loop focuses on the first integer and then second one focuses on
        // the loop
        // check if integer i is one higher
        // if it is add to count
        // if not change count to zero and reset
        // return count

        //alg1:
        // put all of the numbers in the array into a set
        // so we can remove duplicates and
        // so that we can check if the number plus 1 exists
        // loop through the array look at the number in the array
        // that is num - 1
        // which would be the start of our sequence
        // keep track of the numbers
        // we want to check if the current number
        // which is plus one is in the set
        // if it is then we add one to our count
        // and keep the count going if it is num + 1
        // update the longest consequtive sequence
        // return the longest


        unordered_set <int> numSet(nums.begin(), nums.end());
        int large =0;
        for(auto& num: numSet){
            if(numSet.find(num - 1 ) == numSet.end()){
                int number = num;
                int count = 1;

                while(numSet.find(number +1) != numSet.end()){
                    number++;
                    count++;
                }

                if(large < count){
                large = count;
            }

            }
            
        }
            return large;
    }
};
