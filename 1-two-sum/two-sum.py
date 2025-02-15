class Solution(object):
    def twoSum(self,nums,target):
        store={}
        for i,n in enumerate(nums):
            diff=target-n
            if diff in store:
                return(store[diff],i)
            store[n]=i