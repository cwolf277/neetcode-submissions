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

      

        map = {}

        for i, num in enumerate(nums):
            complement = target - num
            if complement in map:
                return [map[complement],i]
            map[num] = i
            


        