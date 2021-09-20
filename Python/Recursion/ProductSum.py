'''
Problem Statement:

Write a function that takes in a "special" array and returns its product sum.
 A "special" array is a non-empty array that contains either integers or other
 "special" arrays. The product sum of a "special" array is the sum of its
 elements, where "special" arrays inside it are summed themselves and then
 multiplied by their level of depth.
 The depth of a "special" array is how far nested it is. For instance, the
 depth of []is 1; the depth of the inner array in
 [[]] is 2; the depth of the innermost array in
 [[[]]] is 3.
 Therefore, the product sum of [x, y] is x + y; the
 product sum of [x, [y, z]] is x + 2 * (y + z); the
 product sum of [x, [y, [z]]] is x + 2 * (y + 3z).

'''

def product_sum(special_array, multiplier=1):
    result=0
    for item in special_array:
        if type(item) is list: #if there are no special array then add the result with the multiplier
            result = result + product_sum(item, multiplier+1)
            
        else: #if not then add items and multiply result with multiplier
            result+=item
    return result * multiplier

print(product_sum([5,2,[7,-1],3,[6,[-13,8],4]]))
