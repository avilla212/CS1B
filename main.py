# Merge two arrays 

arr1 = [1,3,55,67,3,2]
arr2 = [1,5,11,2,44,5]

# Merge two arrays using pointers
def mergeArrays(arr1, arr2):
    i: int = 0
    j: int = 0
    merged = [0] * (len(arr1) + len(arr2))
    # merge one value at a time
    # first from arr1 then from arr2
    # repeat until all values are merged
    while i < len(arr1) and j < len(arr2):
        merged[i] = arr1[i]
        merged[j+1] = arr2[j]
        i += 1
        j += 1

       

    return merged

print(mergeArrays(arr1, arr2))

