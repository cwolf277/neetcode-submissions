class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        # goal is to find two numbers in an array
        # that when added up together
        # equal to the target

        # brute force would be to use two loops
        # check if those two equal up to each other
        # to make up the number
        # return the indicies

        # alg would be to create a hashmap
        # with this hashmap we add all the numbers
        # into the array
        # we check if target minus number equals 

      

        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i] + nums[j] == target:
                    return [i,j]
            


        