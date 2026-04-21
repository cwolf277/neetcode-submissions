class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:

        #goal is similar to two sum
        #we want to find the two numbers
        #that equal to the target
        #the array is sorted and the indicies we need to return
        #will not be in 0-Base 

        #alg would be to use the two pointer method
        #we would first initialise left and right
        #as left and right moves we check if any of those number equal
        #the target
        #if not we return 

        left = 0
        right = len(numbers)-1

        while left < right:
            curr = numbers[left] + numbers[right]
            if curr == target:
                return [left+1, right+1]
            elif curr < target:
                left+=1
            else:
                right-=1

        