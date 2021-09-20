def bubble_sort(data):
    swap=False
    for i in range(len(data)-1): #For first element in an array
        print("First data:", i)
        for j in range(len(data)-1-i): # For second element in an array
            print("Second data:", j)
            if data[j] > data [j+1]:
                data[j], data[j+1] = data[j+1], data[j]
                swap=True
                print("Swap done")
            if not(swap):
                return "Already sorted"
            print("pass compleated")
            print("every pass result:",data)
    return data

print(bubble_sort([9,5,3,0,8]))