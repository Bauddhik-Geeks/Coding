def bubble_sort(data):
    swap=False
    for i in range(len(data)-1):
        for j in range(len(data)-1-i):
            if data[j] > data [j+1]:
                data[j], data[j+1] = data[j+1], data[j]
                swap=True
            if not(swap):
                return "Already sorted"
    return data

data=[1,5,8,4,7]
bubble_sort(data)
                
                    