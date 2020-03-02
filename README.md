# sentencereverse
Given an array of characters arr that consists of sequences of characters separated by space characters. 
Each space-delimited sequence of characters defines a word.

Implement a function that reverses the order of the words in the array in the most efficient manner.

Logic:

function reverseArr(arr):

    # reverse all characters:
    n = arr.length
    newarr = null
        for i from n-1 to 0:
        if (arr[i] == ' '):
            newarr.append(arr[n:i]+ ' ')
            n = i
        newarr.append(arr[0:n])
    return arr

Implemented in: C, C++, Go and Python

 
