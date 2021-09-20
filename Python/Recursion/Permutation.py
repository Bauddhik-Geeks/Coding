'''
Problem Statement:
 Write a function that takes in an array of unique integers and returns an
 array of all permutations of those integers in no particular order.
If the input array is empty, the function should return an empty array.
''' 

#intertool prebuild permutaion library     
"""
import intertools 
data =[1,2,3]
for p in itertools.permutations(data):
    print(p)  """


#using backtracking -> leetcode    
""" import itertools
def __init__(self): #constructor
    self.result = [] #Empty list that will contain all the permutaions and we will get output from here
    
def permutation(self, nums: list[int]) -> list[List[int]]:
    self.backtrack(nums,[])
    return self.result 
    
def backtrack(self,nums,path): #nums gonna hold the number that are left after we choose number
    #path var gonna hold the path of permutation, each path will be one individual permuation
    if not nums: #when num does not have anyhting in it
        self.result.append(path)
    for x in range(len(nums)):
        
        '''
        [1,2,3]
        [2,3] and we selected 1 terfore [2,3] are left 
        path = [1, _ , _] we want to add next two values to it
        we only need to give those 2 values for that we use num[: x] means till x and we will
        add anyhting after x till end that is [x+1:] 
        '''
        self.backtrack(nums[:x]+nums[x+1:],path+[nums[x]]) #add certain number to current path """
        

#recursion approach    
def permutation(start, end=[]):
    #here end is the path and st
    if(len(start) == 0): 
        print(end)
    else:
        for i in range(len(start)):
            permutation(start[:i] + start[i+1:], end + start[i:i+1])            
        '''
        [1,2,3]
        [2,3] and we selected 1 therfore [2,3] are left 
        end = [1, _ , _] we want to add next two values to it
        we only need to give those 2 values for that we use start[: i] means till i and we will
        add anyhting after i till end that is [i+1:] 
        '''
            
#function call
permutation([1,2,3])

# O(n!) Time complexity

        