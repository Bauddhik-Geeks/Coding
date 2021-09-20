'''

Prblem Statement:


Write a function that takes in an array of unique integers and returns its 
powerset. The powerset P(X) of a set X is the set of all subsets of X. For 
example, the powerset of [1,2] is [[], [1], [2], [1,2]].
Note that the sets in the powerset do not need to be in any particular 
order.


'''

def Power_set(set):
    if set == []: # if set is empty list that return []
        return [[]]
    x = Power_set(set[1:]) #x contains the elememnt from 1 till end
    #print(x)
    return ( x + [[set[0]] + y for y in x])


print(Power_set([1,2,3]))
    

