class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre =1;
        vector<int> preV;
        int aff = 1;
        vector<int> affT;
        vector<int> numbers;
        for(int i =0; i< nums.size(); i++){
            pre*= nums[i];
            // cout<< pre<< endl;
            preV.push_back(pre);
           
    }

    for(int i = nums.size()-1; i>= 0; i--){
        aff *= nums[i];
        // cout<< aff<<endl;
        affT.push_back(aff);

        
    }
    reverse(affT.begin(), affT.end());
    pre =1;
    for(int i =0; i< nums.size(); i++){
        numbers.push_back(pre);
        pre*=nums[i];
    }
    aff = 1;
    for(int i = nums.size()-1; i>= 0; i--){
        numbers[i]*=aff;
        aff*=nums[i];
    }
    return numbers;
    }
};
