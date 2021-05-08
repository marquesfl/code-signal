def adjacentElementsProduct(inputArray):
    "Return the largest product of adjacent elements of an array."
    return max(map(lambda x, y: x * y,
                   inputArray, inputArray[1:]))
