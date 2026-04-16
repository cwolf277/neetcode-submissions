class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum =1;
        int j =1;
        int zero=0;
        vector<int> numbers;

        for(int i =0; i< nums.size(); i++, ++j){
           
            if(nums[i] == 0){
                zero++;
                
                
            }else{

            sum *= nums[i];
            }
            
            
        
        }
        // sum = abs(sum);

        cout<< sum;
        int newsum = 1;
        for(int i =0; i< nums.size(); i++){
            if(zero> 1){
                numbers.push_back(0);
            }else if(zero == 1){
                j= (nums[i] == 0) ? sum : 0;
                numbers.push_back(j);
            }else{
                newsum = sum/nums[i];
                numbers.push_back(newsum);
            }
           
        }
        return numbers;

    }
};
