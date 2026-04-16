class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int k) {

        int i = 0;
        int j = numbers.size()-1;
        while(i<j){
            cout<<numbers[j] << numbers[j] + numbers[i]<< numbers [i]<<endl;
            if((numbers[i]+ numbers[j]) > k){
                j--;
            }else if((numbers[j]+ numbers[i]) < k){
                i++;
            }else{
                return {i+1,j+1};
                
            }


        }
        
        return {};
    }
};
