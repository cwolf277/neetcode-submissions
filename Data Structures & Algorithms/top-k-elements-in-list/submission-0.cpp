class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> sorter;
        for(int num : nums){
            sorter[num]++;
        
            
        }
        vector<int> result;
        vector<pair<int,int>> listof(sorter.begin(), sorter.end());

        sort(listof.begin(), listof.end(), [](pair<int, int>& a, pair<int, int>& b){
            return a.second > b.second;
        });

        for(int i =0; i<k; i++){
            
                result.push_back(listof[i].first);
        }

        

        

        return result;
    }
};
