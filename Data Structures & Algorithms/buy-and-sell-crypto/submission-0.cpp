class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int max = 0;
        for(int nums: prices){
            if(nums < min){
                min = nums;
            }
            else if(max < nums - min){
                max = nums - min;
            }
        }

        return max;
        

     
    }
};
