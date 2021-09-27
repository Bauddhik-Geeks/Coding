################ METHOD 1 ##################

def gcd(a,b):            #Calculate HCF/GCD
    if b==0:
        return a
    else:
        return gcd(b,a%b)
print(gcd(18,6))

# For LCM : (a,b/gcd)
LCM=24*18/gcd(24,18)    #Calculate LCM
print(f'LCM is {LCM}')

############### METHOD 2 ###################
# Approch

#hcf(18,6)
#hcf(12,6)
#hcf(6,6)   -----> return 6

def hcf(a,b):
    while(a!=b):
        if (a>b):
            return hcf(a-b,b)
        else:
            return hcf(a,b-a)
    return a
print(hcf(18,6))