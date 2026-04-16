class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       // goal is to get the K number of most frequent numbers within an array of nums

       // brute force would be to do a double loop. crreate an array
       // check the number and count frequency of all numbers
       // compare the frequency and then return 

       unordered_map<int,int> freq;

       for(auto& t: nums){
        freq[t]++;
       }

        vector<pair<int,int>> res;
        for(auto& j: freq){
            res.push_back({j.first, j.second});
        }

        sort(res.begin(), res.end(), [](auto& a, auto& b){
            return a.second>b.second;
        });

        vector<int> answer;
        for(int i = 0; i< k; i++){
            answer.push_back(res[i].first);
        }
      
return answer;
       
    }
};
