class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> map;
       vector<int> arr;
       
            for(int i =0; i< nums.size(); i++){
                int diff = target - nums[i];
                if(map.count(diff)){
                    arr.push_back(map[diff]);
                    arr.push_back(i);
                    cout<< i<<endl;
                }

                map[nums[i]] = i;

            }
       

      

       
        return arr;
    }
};
