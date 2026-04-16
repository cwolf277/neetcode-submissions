class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //goal:
        // given an integer array of numbers
        // and we are given an integer K
        // we have to look through the array
        // and see which one appears k times

        //constraints:
        // 1 <= nums.length <= 10^4
        // -1000 <= nums[i] <= 1000
        // 1 <= k <= number of distinct elements in nums

        //brute force:
        // have two loops
        // have an array count
        // loop one stays at the first element
        // second loop compares the element in the current spot
        // if theres a match add the count to the array
        // end of two loops
        // loop the array compare numbers in array with k if theres a match
        // add to kArray
        // return kArray

        //alg1:
        // create a heap 
        // using a map we count the frequency of the most common number
        // we insert the frequency into the heap
        // if the heap size is getting bigger than k we just pop the heap
        // after the smallest has been removed and we have reached the end of frequency
        // we create a vector array result
        // loop through the heap
        // copy the heap over to the array
        // return the array

        unordered_map<int, int> freq;
        for(int num:nums){
            freq[num]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> miniheap;
        for(auto& num: freq){
            miniheap.push({num.second, num.first});
            if(miniheap.size() > k){
                miniheap.pop();
            }
        }

        vector<int> result;
        while(!miniheap.empty()){
            result.push_back(miniheap.top().second);
            miniheap.pop();
        }



        return result;
    }
};
